#include<stdio.h>
int main(){
	char s[100];
	while(1){
		printf("Enter a number: ");
		scanf("%s", s);
		if(strcmp(s, "q")==0)break;
		int l=strlen(s);
		int a=0;
		for(int q=0;q<l;q++){
			if(isdigit(s[q]))a++;
		}
		printf("The number %s has %d digits\n", s, a);
	}
	printf("Quit\n");
}

