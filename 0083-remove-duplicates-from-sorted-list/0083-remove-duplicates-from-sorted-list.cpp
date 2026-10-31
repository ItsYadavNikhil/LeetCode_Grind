class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        if(head == NULL) return head;
        ListNode* temp = head;
        while(temp->next != NULL) {
            if(temp->val == temp->next->val) {
                ListNode* dup = temp->next;
                temp->next = temp->next->next;
                delete dup;
            }
            else {
                temp = temp->next;
            }
        }
        return head;
    }
};