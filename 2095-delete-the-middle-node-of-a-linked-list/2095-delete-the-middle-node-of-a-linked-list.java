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
    public ListNode deleteMiddle(ListNode head) {
        int i = 0;
        if(head == null || head.next == null){
            head = null;
            return head;
        }
        ListNode temp = head;
        while(head != null){
            head = head.next;
            i++;
        }
        head = temp;
        i = i / 2;
        int j = 0;
        
        while(j<i-1){
            temp = temp.next;
            j++;
        }
        
        temp.next = temp.next.next;

        return head;

    }
}