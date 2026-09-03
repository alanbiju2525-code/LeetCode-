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
    public ListNode removeElements(ListNode head, int val) {
        ListNode head1 = null;
        ListNode temp = null;
       
        
        if (head == null) {
            return head;
        }

        while(head != null){
            if(val != head.val){
                ListNode newNode = new ListNode(head.val);
                if(head1 == null){
                    head1 = newNode;
                    temp = newNode;
                }
                else{
                    temp.next = newNode;
                    temp = newNode;
                }
            }
            head = head.next;
        }
        return head1;
    }
}