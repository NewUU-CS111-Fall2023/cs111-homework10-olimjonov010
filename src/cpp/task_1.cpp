/*
 * Author:
 * Date:
 * Name:
 */


#include <iostream>
#include <vector>

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(nullptr) {}
};
class Problem1 {
public:
    static ListNode* mergeNodes(ListNode* head) {
        ListNode dummy(0), *tail = &dummy;
        int sum = 0;
        for (ListNode* node = head->next; node != nullptr; node = node->next) {
            if (node->val == 0) {
                if (sum > 0) {
                    tail->next = new ListNode(sum);
                    tail = tail->next;
                    sum = 0;
                }
            } else {
                sum += node->val;
            }
        }
        return dummy.next;
    }
};
ListNode* createLinkedList(const std::vector<int>& nums) {
    ListNode dummy(0);
    ListNode* tail = &dummy;
    for (int num : nums) {
        tail->next = new ListNode(num);
        tail = tail->next;
    }
    return dummy.next;
}
void printLinkedList(ListNode* head) {
    for (ListNode* node = head; node != nullptr; node = node->next) {
        std::cout << node->val << " ";
    }
    std::cout << std::endl;
}
void deleteLinkedList(ListNode* head) {
    while (head != nullptr) {
        ListNode* temp = head;
        head = head->next;
        delete temp;
    }
}
