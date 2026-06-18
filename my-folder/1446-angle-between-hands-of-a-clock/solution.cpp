class Solution {
public:
    double angleClock(int hour, int minutes) {
        float minuteAngle=minutes*6;
        float hourAngle=(hour*30)+(minutes*0.5);
        float ans=abs(hourAngle-minuteAngle);
        return min(ans,360-ans);       
    }
};
