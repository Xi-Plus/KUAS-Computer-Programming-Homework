#include<stdio.h>
double f(double a,double b){
	return 2*a*b/(a+b);
}
int main(){
	double a,b;
	while(~scanf("%lf %lf", &a, &b)){
		fflush(stdin);
		printf("%lf\n", f(a,b));
	}
}

