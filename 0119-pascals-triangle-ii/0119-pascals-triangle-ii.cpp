class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int> temp;
        long long value=1;
        for(int c=0;c<rowIndex+1;c++){
            if(c==rowIndex){
                value=1;
            }
            temp.push_back(value);
            value=value*(rowIndex-c)/(c+1);
        }
        return temp;
    }
};