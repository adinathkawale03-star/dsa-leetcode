class Solution {
public:
    double angleClock(int hour, int minutes) {
      double hourangle=(hour%12)*30+(minutes*30.0)/60;
      double minangle=minutes*6;
      double angle=abs(hourangle-minangle);
      if(angle>180) angle=360-angle;
      return angle;
    }
};