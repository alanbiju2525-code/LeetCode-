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
    public ListNode insertionSortList(ListNode head) {
        if(head == null || head.next == null){
            return head;
        }
        for (ListNode i = head; i != null; i = i.next) {
        for (ListNode j = i.next; j != null; j = j.next) {

            if (i.val > j.val) {
                int temp = i.val;
                i.val = j.val;
                j.val = temp;
            }
        }
    }
       
        return head;
    }
}