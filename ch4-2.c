#include<stdio.h>
int main(){
	double mile,gal;
	scanf("%lf %lf",&mile,&gal);
	printf("%.1lf mi/gal\n",mile/gal);
	printf("%.1lf L\n",100/1.609/mile*gal*3.785);
}

