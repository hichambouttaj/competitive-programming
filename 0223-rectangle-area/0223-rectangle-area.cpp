class Solution {
public:
    int computeArea(int ax1, int ay1, int ax2, int ay2, int bx1, int by1, int bx2, int by2) {
        if(ax2 < bx1 || bx2 < ax1 || by2 < ay1 || by1 > ay2 )
            return (ax2 - ax1) * (ay2 - ay1) + (bx2 - bx1) * (by2 - by1);
        
        int right = std::min(ax2, bx2);
        int left = std::max(ax1, bx1);
        int top = std::min(ay2, by2);
        int bottom = std::max(ay1, by1);
        
        return (ax2 - ax1) * (ay2 - ay1) + (bx2 - bx1) * (by2 - by1) - (right - left) * (top - bottom);
    }
};