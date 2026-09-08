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
    public boolean isPalindrome(ListNode head) {
        ListNode temp;
        temp = head;
        int count = 0;
        while(head != null){
            head = head.next;
            count++;
        }

        head = temp;
        int[] a = new int[count];

        for(int i = 0; i<count; i++){
            a[i] = head.val;
            head = head.next;
        }
        int i , j;
        i = 0;
        j = count-1;
        
        while(i<j){
            if(a[i] != a[j]){
                return false;
            }
            i++;
            j--;
        }
        return true;
    }
}