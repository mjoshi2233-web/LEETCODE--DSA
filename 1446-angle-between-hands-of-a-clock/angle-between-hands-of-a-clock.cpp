class Solution {
public:
    double angleClock(int hour, int minutes) {
        hour%=12;
        float ang=abs((30*hour) - ((11.0/2)*minutes));
        float final=min(ang,360-ang);return final;
    }
};