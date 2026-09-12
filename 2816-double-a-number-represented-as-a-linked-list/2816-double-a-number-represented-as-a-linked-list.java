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
    public ListNode doubleIt(ListNode head) {
        ListNode ans=new ListNode(0);
        ListNode temp=ans;
        while(head!=null){
            if(head.val>4){
                ans.val++;
            }
            ListNode newnode=new ListNode((2*head.val)%10);
            ans.next=newnode;
            ans=ans.next;
            head=head.next;
        }
        if(temp.val!=0){
            return temp;
        }
        return temp.next;
    }
}