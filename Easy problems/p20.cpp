// 21. Merge Two Sorted Lists
// Complete with 100% runtime and 11% memory
#include <iostream>
#include <string>
#include <vector>
using namespace std;

struct ListNode {
    int val;
    ListNode* next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode* next) : val(x), next(next) {}
};

ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
    ListNode* res = new ListNode(0);
    ListNode* list3 = res;
    while (list1 != NULL && list2 != NULL) {
        if (list1->val <= list2->val) {
            list3->next = new ListNode(list1->val);
            list3 = list3->next;
            list1 = list1->next;
        } else {
            list3->next = new ListNode(list2->val);
            list3 = list3->next;
            list2 = list2->next;
        }
    }
    while (list1 != NULL) {
        list3->next = new ListNode(list1->val);
        list1 = list1->next;
        list3 = list3->next;
    }

    while (list2 != NULL) {
        list3->next = new ListNode(list2->val);
        list2 = list2->next;
        list3 = list3->next;
    }

    return res->next;
}

int main() {}