#include<stdio.h>
int main(){
	for(int q=0;q<6;q++){
		for(int w=0;w<=q;w++){
			printf("%c", 'F'-w);
		}
		printf("\n");
	}
	for(int q=0;q<5;q++){
		for(int w=0;w<5-q-1;w++){
			printf(" ");
		}
		for(int w=0;w<=q;w++){
			printf("%c", 'A'+w);
		}
		for(int w=0;w<q;w++){
			printf("%c", 'A'+q-w-1);
		}
		printf("\n");
	}
}


