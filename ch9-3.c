#include<stdio.h>
int checkint(double a){
	return a==(int)a;
}
int checkint2(double a, double b){
	return checkint(a)&&checkint(b);
}
double add(double a, double b){
	return a+b;
}
double minus(double a, double b){
	return a-b;
}
double mul(double a, double b){
	return a*b;
}
double divf(double a, double b){
	return a/b;
}
int divi(int a, int b){
	return a/b;
}
int mod(int a, int b){
	return a%b;
}
int main(){
	double a, b;
	char c;
	while(~scanf("%lf%c%lf", &a, &c, &b)){
		int ok=1;
		double ans;
		int isint=checkint2(a,b);
		switch(c){
			case '+':
				ans=add(a,b);
				break;
			case '-':
				ans=minus(a,b);
				break;
			case '*':
				ans=mul(a,b);
				break;
			case '/':
				if(isint) ans=divi(a,b);
				else ans=divf(a,b);
				break;
			case '%':
				if(isint) ans=mod(a,b);
				else {
					ok=0;
					printf("mod cannot float\n");
				}
				break;
		}
		if(ok){
			if(isint) printf("%d\n", (int)ans);
			else printf("%lf\n", ans);
		}
	}
}

