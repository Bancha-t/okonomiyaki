#include<iostream>
#include <cmath>
using namespace std;

struct Rect{
	double x,y,w,h;
};

double overlap(Rect A,Rect B){
	double w , h , a ;
	w = min((A.x+A.w),(B.x+B.w)) - max(A.x,B.x) ;
	h = min(A.y,B.y)- max((A.y-A.h),(B.y-B.h)) ;
	a = w*h ;
	if(a <= 0) return 0 ;
	else return a ;
} 
