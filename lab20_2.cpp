#include<iostream>
using namespace std;

struct Rect{
	double x,y,w,h;
};

double overlap(Rect *r, Rect *s){
	double ow, oh;
	ow = min(r->x+r->w, s->x+s->w) - max(r->x, s->x);
	oh = min(r->y, s->y) - max(r->y-r->h, s->y-s->h);
	if(ow>0 && oh>0) return ow*oh;
	else return 0;
}
