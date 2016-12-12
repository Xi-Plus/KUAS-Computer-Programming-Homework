#include<stdio.h>
char inputmode(){
	char mode;
	while(1){
		printf("a. add      s.subtract\n");
		printf("m. mulitply d.divide\n");
		printf("q. quit\n");
		printf("Enter the operation of your choices:");
		scanf("%c", &mode);
		fflush(stdin);
		switch(mode){
			case 'a':case 'A':
			case 's':case 'S':
			case 'm':case 'M':
			case 'd':case 'D':
			case 'q':case 'Q':
				return mode;
		}
		printf("Error!\n");
	}
}
void ans(char mode, double a, double b){
	switch(mode){
		case 'a':case 'A':
			printf("%lf + %lf = %lf\n", a, b, a+b);
			break;
		case 's':case 'S':
			printf("%lf - %lf = %lf\n", a, b, a-b);
			break;
		case 'm':case 'M':
			printf("%lf * %lf = %lf\n", a, b, a*b);
			break;
		case 'd':case 'D':
			printf("%lf / %lf = %lf\n", a, b, a/b);
			break;
	}
}
int main(){
	char mode;
	char s[100];
	while(mode=inputmode()){
		if(mode=='q'||mode=='Q')break;
		double a,b;
		while(1){
			printf("Enter first number:");
			if(scanf("%lf", &a)==1)
				break;
			scanf("%s", &s);
			printf("Error! %s is not a number.\n", s);
		}
		while(1){
			printf("Enter second number:");
			if(scanf("%lf", &b)!=1){
				scanf("%s", &s);
				printf("Error! %s is not a number.\n", s);
			} else if((mode=='d'||mode=='D')&&b==0) {
				printf("Error! Second number cannot be 0.\n");
			} else {
				break;
			}
		}
		ans(mode, a, b);
		fflush(stdin);
	}
	printf("Bye!\n");
}

