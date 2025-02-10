#include<iostream>
using namespace std;

struct Rect{
	double x,y,w,h;
};

double overlap(Rect r1 , Rect r2){
    double overlapX = max(r1.x, r2.x);
    double overlapY = min(r1.y, r2.y);
    double overlapWidth = min(r1.x + r1.w, r2.x + r2.w) - overlapX;
    double overlapHeight = overlapY - max(r1.y - r1.h, r2.y - r2.h);
    
   
    if (overlapWidth > 0 && overlapHeight > 0) {
        
        return overlapWidth * overlapHeight;
    }
    return 0;  
}

