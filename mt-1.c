#include<stdio.h>
#define dofy 365
int main(){
	char name[100], address[200];
	while(1){
		printf("name:");
		gets(name);
		printf("address:");
		gets(address);
		printf("name:%s address:%s\n", name, address);
		int y;
		printf("age:");
		scanf("%d", &y);
		printf("%d %lld\n", y*dofy, (long long)y*31560000);
		if(y<0)break;
		getchar();
	}
}

