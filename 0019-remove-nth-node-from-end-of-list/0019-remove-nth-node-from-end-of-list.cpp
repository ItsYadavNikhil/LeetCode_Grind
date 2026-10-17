/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(head->next == NULL) return head = nullptr;
        int sz=1;
        ListNode* temp = head;
        ListNode* p = head;
        while(temp->next != NULL) {
            if(sz == n-1 && temp->next->next == NULL) return head->next;
            if(sz > n) {
                p = p->next;
            }
            temp = temp->next;
            sz++;
        }
        p->next = p->next->next;
        return head;
    }
};