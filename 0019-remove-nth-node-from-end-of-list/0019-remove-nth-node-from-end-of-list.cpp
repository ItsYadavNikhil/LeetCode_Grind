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
        ListNode* temp = head;
        int sz = 1;
        while(temp->next != NULL) {
            sz++;
            temp=temp->next;
        }
        temp = head;
        if(sz-n == 0) return head->next;
        for(int i = 1;i<=sz-n; i++) {
            if(i == sz-n) {
                temp->next = temp->next->next;
                return head;
            }
            temp=temp->next;
        }
        return head;
    }
};