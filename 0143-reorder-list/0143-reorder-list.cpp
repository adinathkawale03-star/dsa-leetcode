/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    void reorderList(ListNode* head) {
        //brute force solution for the problem 
        int len=0;
        ListNode* temp=head;
        while(temp!=NULL){
            len++;
            temp=temp->next;
        }
        int cnt=((len%2==1)?((len/2)+1):len/2);
        vector<int> arr;
        stack<int> help;
        temp=head;
        while(temp!=NULL){
            if(cnt!=0){
                arr.push_back(temp->val);
                cnt--;
                temp=temp->next;
                continue;
            }
            help.push(temp->val);
            temp=temp->next;
        }
        int index=0;
        int index2=0;
        temp=head;
        while(temp!=NULL){
            if(index%2==0){
                temp->val=arr[index2];
                index2++;
            }
            else{
                temp->val=help.top();
                help.pop();
            }
            index++;
            temp=temp->next;
        }
    }
};
//tc:o(3*n)== o(n) , sc: o(n)