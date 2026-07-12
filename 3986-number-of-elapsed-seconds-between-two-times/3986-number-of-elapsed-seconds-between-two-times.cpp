class Solution {
public:
    int secondsBetweenTimes(string startTime, string endTime) {
        int sthr=stoi(startTime.substr(0,2));
        int stmn=stoi(startTime.substr(3,2));
        int stss=stoi(startTime.substr(6,2));
        int endhr =stoi(endTime.substr(0,2));
        int endmn =stoi(endTime.substr(3,2));
        int endss= stoi(endTime.substr(6,2));
        
        int startTm=sthr*3600 +stmn*60 +stss;
        int endTm =endhr*3600 +endmn*60 +endss;
        return endTm - startTm;
    }
};