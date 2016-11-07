#include<stdio.h>
#include<float.h>
int main(){
	float f=1.0/6.0;
	double d=1.0/6.0;
	printf("%.4lf\n",d);
	printf("%.12lf\n",d);
	printf("%.16lf\n",d);
	printf("%.4f\n",f);
	printf("%.12f\n",f);
	printf("%.16f\n",f);
	printf("%d\n",FLT_DIG);
	printf("%d\n",DBL_DIG);
}


