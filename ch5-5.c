#include<stdio.h>
#define h 60
int main(){
	int m;
	while(~scanf("%d", &m) && m>=0){
		printf("%d minutes are %d hours, %d minutes.\n", m, m/h, m%h);
	}
}


