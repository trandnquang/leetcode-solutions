// 83. Remove Duplicates from Sorted List
// Complete with 100%runtime and 12% memory

#include <iostream>
#include <string>
#include <vector>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};


ListNode* deleteDuplicates(ListNode* head) {
    if (head == NULL || head->next == NULL) return head;
    ListNode* curr = head;
    ListNode* last = head;

    

    while (last != NULL) {
        if (last->val != curr->val) {
            curr->next = last;
            curr = curr->next;
        }
        last = last->next;
    }

    curr->next = NULL;

    return head;
}

int main() {
    
}