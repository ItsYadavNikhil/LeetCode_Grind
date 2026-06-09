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

    
    ListNode* reverseList(ListNode* head) {
        ListNode* prev = nullptr;
        ListNode* temp = head;
        
        while (temp != nullptr) {
            ListNode* newNode = new ListNode(temp->val);
            newNode->next = prev;
            prev = newNode;
            temp = temp->next;
        }
        
        return prev;
    }
    
    bool isPalindrome(ListNode* head) {
        ListNode* temp = head;
        ListNode* rev = reverseList(head);
        while(temp != nullptr){
            if(temp->val != rev->val) {
                return false;
            }
            temp = temp->next;
            rev = rev->next;
        }
        return true;
    }
};