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
    public ListNode swapPairs(ListNode head) {
        if(head==null || head.next==null){
            return head;
        }
        int flag = 0;
        ListNode temp = head;
        ListNode track = null;
        while(temp != null && temp.next !=null){
            
            if(flag==0){
                ListNode dummy1 = temp;
                ListNode dummy2 = temp.next;
                temp = dummy2.next;

                dummy2.next = dummy1;
                head = dummy2;
                
                dummy1.next = temp;
                flag = 1;
                track = dummy1;
            }
            else{
                ListNode dummy1 = temp;
                ListNode dummy2 = temp.next;
                temp = dummy2.next;
                
                dummy2.next = dummy1;
                track.next = dummy2;
                
                dummy1.next = temp;
                track = dummy1;
            }
        }
        
        return head;
    }
}