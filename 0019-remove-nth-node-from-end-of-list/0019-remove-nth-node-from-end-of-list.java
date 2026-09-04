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
        if (head == null) {
            return null;
        }

        ListNode dummy = new ListNode(0);
        dummy.next = head;

        ListNode temp = head;
        int length = 0;

        while (temp != null) {
            length++;
            temp = temp.next;
        }

        temp = dummy;

        int j = 0;
        while (j < length - n) {
            temp = temp.next;
            j++;
        }

        temp.next = temp.next.next;

        return dummy.next;
    }
}