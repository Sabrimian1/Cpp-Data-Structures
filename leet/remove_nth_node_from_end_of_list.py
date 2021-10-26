# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def removeNthFromEnd(self, head: Optional[ListNode], n: int) -> Optional[ListNode]:
        
        
        if head is None:
            return none
        
        
        length = 0
        
        dummy = head
        
        while dummy is not None:
            dummy = dummy.next
            length+=1
            
        if length == n:
            return head.next
        
        temp = head
        count = 1
        
        while count < length-n:
            temp = temp.next
            count+=1
         
        temp.next = temp.next.next
        return head