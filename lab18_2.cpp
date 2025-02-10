#include<iostream>
using namespace std;

struct Rect {
    double x, y, w, h;
};

double overlap(const Rect* R1, const Rect* R2) {
    double x_left = R1->x > R2->x ? R1->x : R2->x;
    double y_top = R1->y < R2->y ? R1->y : R2->y;
    double x_right = (R1->x + R1->w) < (R2->x + R2->w) ? (R1->x + R1->w) : (R2->x + R2->w);
    double y_bottom = (R1->y - R1->h) > (R2->y - R2->h) ? (R1->y - R1->h) : (R2->y - R2->h);
    double w = x_right - x_left;
    double h = y_top - y_bottom;
    
    if (w > 0 && h > 0) {
        return w * h;
    } else {
        return 0;
    }
}
