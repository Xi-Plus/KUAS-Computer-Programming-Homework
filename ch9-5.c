#include<stdio.h>
double* f(double *v, int l){
	double ans[2]={-1e100, 1e100};
	for(int q=0;q<l;q++){
		if(v[q]<ans[1]) ans[1]=v[q];
		if(v[q]>ans[0]) ans[0]=v[q];
	}
	ans[1]=ans[0]-ans[1];
	return ans;
}
int main(){
	double v1[]={5.8, 6.8, 4.8, 4.9, 1.4};
	double v2[]={4.3, 8.2, 4.5, 4.1, 1.5, 7.5};
	double v3[]={4.8, 7.3, 7.2, 4.2, 1.3, 8.5, 6.6};
	double *a;
	a=f(v1, sizeof(v1)/sizeof(double));
	printf("%lf %lf\n", a[0], a[1]);
	a=f(v2, sizeof(v2)/sizeof(double));
	printf("%lf %lf\n", a[0], a[1]);
	a=f(v3, sizeof(v3)/sizeof(double));
	printf("%lf %lf\n", a[0], a[1]);
}

