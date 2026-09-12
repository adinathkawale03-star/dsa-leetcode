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
    public ListNode addTwoNumbers(ListNode l1, ListNode l2) {
        int cnt=0;
        ListNode temp=new ListNode(0);
        ListNode ans=temp;
        while(l1!=null || l2!=null || cnt!=0){
            int sum=((l1!=null)?l1.val:0 )+ ((l2!=null)?l2.val:0) +  cnt;
            ListNode newnode=new ListNode(sum%10);
            temp.next=newnode;
            temp=temp.next;
            cnt=sum/10;
            if(l1!=null){l1=l1.next;}
            if(l2!=null){l2=l2.next;}
        }
        return ans.next;
    }
}