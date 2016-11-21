#include<stdio.h>
//#include<math.h>
double d(double a, double b){
	return a-b;
}
double m(double a, double b){
	return a*b;
}
double ans(double a,double b){
	return d(a,b)/m(a,b);
}
int main(){
	double a,b;
	while(scanf("%lf %lf", &a, &b)==2){
		printf("%lf\n", ans(a,b));
	}
}

