#include<stdio.h>
int strindex(char *s, char *t){
	char *a=strstr(s, t);
	if(a) return a-s+1;
	else return -1;
}
int main(){
	printf("%d\n", strindex("this is a sample.", "sample"));
	printf("%d\n", strindex("this is a sample.", "sam"));
	printf("%d\n", strindex("this is a sample.", "ample"));
	printf("%d\n", strindex("this is a sample.", "simple"));
	printf("%d\n", strindex("qweasdzxc", "qwe"));
	printf("%d\n", strindex("qweasdzxc", "asd"));
	printf("%d\n", strindex("qweasdzxc", "zxc"));
	printf("%d\n", strindex("qweasdzxc", "qaz"));
}

