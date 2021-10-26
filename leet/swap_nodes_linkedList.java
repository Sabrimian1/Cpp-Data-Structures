class Solution {
    public ListNode swapNodes(ListNode head, int k) {  
        int length = get_length(head);
        
        if(length == 1 && k == 1){
            return head;
        }else if(length == 2 && k == 2){
            int val = head.next.val;
            head.next.val = head.val;
            head.val = val;
            return head;
        }
        ListNode dummy = head;
        
        int count = 1;
        int k1;
        int k2;
        
        while (count < k){
            dummy = dummy.next;
            count++;
        }
        k1 = dummy.val;
        
        while (count < (length - k + 1)){
            dummy = dummy.next;
            count++;
        }
        k2 = dummy.val;
        dummy.val = k1;
        count = 1;
        dummy = head;
        
        
        while(count < k){
            dummy = dummy.next;
            count++;
        }
        
        dummy.val = k2;      
        return head;                             
        
    }  
    public int get_length(ListNode head){
            
            int length = 0;
            
            ListNode current = head;
            
            while (current != null){
                current = current.next;
                length++;
            }
            
            return length;
            
            
        }
}

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
    public ListNode swapNodes(ListNode head, int k) {   
        
        
        ListNode temp = head;
        int list_length = 0;
        
        while(temp != null){
            temp = temp.next;
            list_length++;
        }
        
        if(list_length == 1 && k == 1){
            return head;
        }else if(list_length == 2){
            int dummy_k = head.val;
            head.val = head.next.val;
            head.next.val = dummy_k;
            return head;
        }
        
        temp = head;
        
        int count = 1;
        while(count < k){
            temp = temp.next;
            count++;
        }
        
        ListNode k1 = temp;
        
        while(count < (list_length-k+1)){
            temp = temp.next;
            count++;                
        }
        
        ListNode k2 = temp;
        
        int temp_k1 = k1.val;
        
        k1.val = k2.val;
        k2.val = temp_k1;
        
        return head;
    }
    
    
}


//using fast and slow pointer -- correct method

class Solution {
    public ListNode swapNodes(ListNode head, int k) {   
        //using fast and slow pointer method
        
        if (head == null || head.next == null){
            return head;
        }
        
        ListNode fast = head;
        ListNode slow = head;
        
        int count = 1;
        
        while(count < k){
            fast = fast.next;
            count++;
        }
        
        ListNode k1 = fast;
        
        while(fast.next != null){
            fast = fast.next;
            slow = slow.next;
        }
        
        int temp = slow.val;
        slow.val = k1.val;
        k1.val = temp;
        
        return head;
        
    }
    
    
}