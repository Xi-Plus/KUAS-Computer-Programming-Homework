#include<stdio.h>
void p3(float f){
	printf("%f\n",f*f*f);
}
int main(){
	float f;
	scanf("%f", &f);
	p3(f);
}

