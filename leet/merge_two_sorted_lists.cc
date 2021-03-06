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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        if (l1 == NULL) return l2;
        if (l2 == NULL) return l1;
        
        ListNode* answer;
        ListNode* temp = answer; //iterator to set values of rest of list
        
        while(l1 != NULL && l2 != NULL){
            if(l1->val < l2->val){
                temp->next = l1;
                l1 = l1->next;
                temp = temp->next;
            }else{
                temp->next = l2;
                l2 = l2->next;
                temp = temp->next;
            }
        }
        
        if(l1 == NULL){
            temp->next = l2;
            l2 = l2->next;
            
        }else if (l2 == NULL){
            temp->next = l1;
            l1 = l1->next;
        }
        
        return answer->next;
    }
};