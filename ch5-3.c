#include<stdio.h>
int main(){
	double d;
	scanf("%lf", &d);
	double ans = (d*950/(3*1e-23));
//	printf("%lf\n", ans);
	printf("%lld\n", (long long)ans);
}

