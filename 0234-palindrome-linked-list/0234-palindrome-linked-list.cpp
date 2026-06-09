// First Approach

// class Solution {
// public:   
//     ListNode* reverseList(ListNode* head) {
//         ListNode* prev = nullptr;
//         ListNode* temp = head;
        
//         while (temp != nullptr) {
//             ListNode* newNode = new ListNode(temp->val);
//             newNode->next = prev;
//             prev = newNode;
//             temp = temp->next;
//         }
        
//         return prev;
//     }
    
//     bool isPalindrome(ListNode* head) {
//         ListNode* temp = head;
//         ListNode* rev = reverseList(head);
//         while(temp != nullptr){
//             if(temp->val != rev->val) {
//                 return false;
//             }
//             temp = temp->next;
//             rev = rev->next;
//         }
//         return true;
//     }
// };

//Second Approach
class Solution {
public:
    bool isPalindrome(ListNode* head) {
        ListNode* slow = head;
        ListNode* fast = head;
        while (fast != nullptr && fast->next != nullptr) {
            slow = slow->next; fast = fast->next->next;
        }   
        ListNode* newHead = slow;
        ListNode* rev = reverse(newHead);
        ListNode* left = head;
        ListNode* right = rev;
        while (right != nullptr) {
            if (left->val != right->val) return false;
            left = left->next;
            right = right->next;
        }
        return true;
    }
    ListNode* reverse(ListNode* head) {
        ListNode* temp = head;
        ListNode* prev = nullptr;
        while (temp!= nullptr) {
            ListNode* second = temp->next;
            temp->next = prev;
            prev  = temp;
            temp = second;
        }
        return prev;
    }
};