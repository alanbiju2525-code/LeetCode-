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
    public ListNode rotateRight(ListNode head, int k) {
        int count = 1;
        ListNode temp = head;
        
        if (head == null || head.next == null) {
            return head;
        }
        while(temp.next!=null){
            temp = temp.next;
            count++;
        }

        temp.next = head;
        k = k%count;
        int pos = count - k;

        temp = head;

        for(int i = 0; i<pos-1; i++){
            temp = temp.next;
        }
        head = temp.next;
        temp.next = null;

        return head;


    }
}