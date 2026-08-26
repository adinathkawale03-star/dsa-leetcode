class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
       queue<int> a1;
       queue<int> a2;
       queue<int> a3;
       for(int i:nums){
        if(i>pivot){
            a2.push(i);//greater
        }
        else if(i==pivot){
            a1.push(i);//equal
        }
        else{
            a3.push(i);//smaller
        }
       }
       vector<int> ans;
       while(!a3.empty()){
        ans.push_back(a3.front());
        a3.pop();
       }
       while(!a1.empty()){
        ans.push_back(a1.front());
        a1.pop();
       }
       while(!a2.empty()){
        ans.push_back(a2.front());
        a2.pop();
       }
       return ans;
    }
};