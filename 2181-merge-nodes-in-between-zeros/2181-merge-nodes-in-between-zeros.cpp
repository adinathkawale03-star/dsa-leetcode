class Solution{
public:
    ListNode* mergeNodes(ListNode* head){
        ListNode* p1=head;
        ListNode* p2=head->next;

        while(p2->next){
            if(p2->val==0){
                p1=p1->next;
                p1->val=0;
            }
            else{
                p1->val+=p2->val;
            }

            p2=p2->next;
        }

        p1->next=nullptr;

        return head;
    }
};