class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        //brute force solution for these problem
        if(!head|| !head->next){
            return NULL;
        }
        int cnt=0;
        ListNode* temp=head;
        while(temp!=NULL){
            cnt++;
            temp=temp->next;
        }
        if(n==cnt){
            return head->next;
        }
        cnt=cnt-n;
        temp=head;
        while(temp!=NULL){
            cnt--;
            if(cnt==0){
                break;
            }
            temp=temp->next;
        }
        ListNode* adi=temp->next;
        temp->next=temp->next->next;
        delete adi;
        return head;
    }
};