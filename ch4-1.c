#include<stdio.h>
#include<string.h>
int main(){
	char f[100],l[100]/*,t[100]=""*/;
	int q;
	printf("fist name:");
	scanf("%s",f);
	printf("last name:");
	scanf("%s",l);
	printf("\"%s %s\"\n",f,l);
	
	for(q=0;q<20-strlen(f)-strlen(l)-1;q++)
		printf(" ");
	printf("%s %s\n",f,l);
	/*
	strcat(t,f);
	strcat(t," ");
	strcat(t,l);
	printf("%20s\n",t);
	*/
	printf("%s %s\n",f,l);
	for(q=0;q<strlen(f)-1;q++)
		printf(" ");
	printf("%d", strlen(f));
	for(q=0;q<strlen(l);q++)
		printf(" ");
	printf("%d", strlen(l));
}


