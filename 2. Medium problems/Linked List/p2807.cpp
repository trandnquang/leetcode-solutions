// 2807. Insert Greatest Common Divisors in Linked List
// Complete with 75% runtime and 81% memory
#include <iostream>
#include <string>
#include <vector>
#include <stack>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

// The Euclidean method to find the Greatest Common Divisor (GCD)
int GCD (int a, int b){
    while(b != 0){
        int r = a % b;
        a = b;
        b = r;
    }
    return a;
}

ListNode* insertGreatestCommonDivisors(ListNode* head) {
    if (head == NULL || head->next == NULL) return head;

    ListNode* curr = head;
    while (curr->next != NULL) {
        int gcd = GCD(curr->val, curr->next->val);
        curr->next =  new ListNode(gcd, curr->next);
        curr = curr->next->next;
    }

    return head;
}