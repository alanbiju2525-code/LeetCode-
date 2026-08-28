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
    public ListNode reverseList(ListNode head) {
        
        
        ListNode reverse = null;
        
        
        while(head!=null){
           
            ListNode newNode = new ListNode(head.val);
             if(reverse == null){
                reverse = newNode;
                
            }
            else{
                newNode.next = reverse;
                
                reverse = newNode;
            }
            head = head.next;
        }
        return reverse;
        
    }
}