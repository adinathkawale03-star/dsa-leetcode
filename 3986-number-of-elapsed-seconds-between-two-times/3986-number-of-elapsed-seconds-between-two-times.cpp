class Solution {
public:
    int secondsBetweenTimes(string startTime, string endTime) {
        int stthr=stoi(startTime.substr(0,2));
        int sttmin=stoi(startTime.substr(3,2));
        int sttss=stoi(startTime.substr(6,2));
        int enthr=stoi(endTime.substr(0,2));
        int entmin=stoi(endTime.substr(3,2));
        int entss=stoi(endTime.substr(6,2));
        int start=stthr*3600+sttmin*60+sttss;
        int end=enthr*3600+entmin*60+entss;
        return end-start;
    }
};