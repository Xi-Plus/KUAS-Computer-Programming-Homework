#include<stdio.h>
int main(){
	double a=100, b=100;
	int y=0;
	while(a>=b)y++,a+=10,b*=1.05;
	printf("%d %lf %lf\n", y, a, b);
}

