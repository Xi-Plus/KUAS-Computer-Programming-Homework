#include<stdio.h>
#define dofw 7
int main(){
	int d;
	int i;
	char c;
	while((i=scanf("%d", &d)) != EOF){
		if (i==0){
			scanf("%c", &c);
			if(c=='q')break;
			else printf("wrong input\n");
		} else {
			printf("%d week(s) and %d days\n",d/dofw,d%dofw);
		}
	}
}

