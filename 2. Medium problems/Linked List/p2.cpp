// 2. Add Two Numbers
// Complete with 100% runtime and 13% memory

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

ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
    bool temp = 0;
    ListNode* l3 = new ListNode(0);
    ListNode* curr = l3;

    while (l1 != NULL && l2 != NULL) {
        curr->next = new ListNode((l1->val + l2->val + temp) % 10);
        temp = (l1->val + l2->val + temp) / 10;
        l1 = l1->next;
        l2 = l2->next;
        curr = curr->next;
    }

    while (l1 != NULL) {
        curr->next = new ListNode((l1->val + temp) % 10);
        temp = (l1->val + temp) / 10;
        l1 = l1->next;
        curr = curr->next;
    }

    while (l2 != NULL) {
        curr->next = new ListNode((l2->val + temp) % 10);
        temp = (l2->val + temp) / 10;
        l2 = l2->next;
        curr = curr->next;
    }

    if (temp != 0) {
        curr->next = new ListNode(temp);
    }

    return l3->next;
}

int main() {
    
}