/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode() {}
 *     ListNode(int val) { this.val = val; }
 *     ListNode(int val, ListNode next) { this.val = val; this.next = next; }
 * }
 */
class Solution {
    public ListNode removeNthFromEnd(ListNode head, int n) {
        
        ListNode temp = head;
        
        int length = getLength(head);
        
        int count = 1;
        
        if(length-n == 0){
            return head.next;
        }
        
        while (count < (length-n)){
            temp = temp.next;
            count++;
        }
        
        temp.next = temp.next.next;
        return head;
        
    
    }
    
    public int getLength(ListNode head){
        if(head == null){
            return 0;
        }
        
        ListNode dummy = head;
        
        int count = 0;
        while(dummy != null){
            dummy = dummy.next;
            count++;
        }
        
        return count;
    }


}