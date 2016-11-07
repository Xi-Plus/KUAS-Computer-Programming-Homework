#include<stdio.h>
void expand(char *s1, char *s2){
	while(*s1!='\0'){
		if(*(s1+1)=='-'){
			if(*s1<*(s1+2)){
				for(char c=*s1;c<=*(s1+2);c++){
					*s2=c;
					s2++;
				}
			} else {
				for(char c=*s1;c>=*(s1+2);c--){
					*s2=c;
					s2++;
				}
			}
			s1+=3;
		} else {
			*s2=*s1;
			s1++;
			s2++;
		}
	}
	*s2='\0';
}
int main(){
	char s1[100], s2[1000];
	gets(s1);
	expand(s1, s2);
	printf("%s\n", s2);
}

