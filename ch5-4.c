#include<stdio.h>
#define a 1.8
#define b 32
#define c 273.16
void Temperature(double f){
	printf("%.2lf %.2f\n",f*a+b,f*a+b+c);
}
int main(){
	double f;
	while(scanf("%lf", &f)){
		Temperature(f);
	}
}

