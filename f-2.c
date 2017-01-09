#include<stdio.h>
int main(){
	int a,b;
	while(1){
		printf("Enter two integers: ");
		scanf("%d%d", &a, &b);
		while((a%=b)&&(b%=a));
		printf("The greatest common divisor: %d\n", a+b);
	}
}

