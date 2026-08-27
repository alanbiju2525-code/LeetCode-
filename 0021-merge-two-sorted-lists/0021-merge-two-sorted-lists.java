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



    public static ListNode mergeTwoLists(ListNode list1, ListNode list2) {
        ListNode head = null;
        head = list1;
        if(list1 == null){
            return list2;
        }
        if(list2 == null){
            return list1;
        }
        while(list1.next!=null){
            list1 = list1.next;
        }
        list1.next = list2;

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