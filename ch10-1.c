#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void f1(int l, int v1[l], int v2[l]){
	for(int q=0;q<l;q++){
		v2[q]=v1[q];
	}
}
void f2(int l,int *v1, int *v2){
	for(int q=0;q<l;q++){
		*(v2+q)=*(v1+q);
	}
}
int main(){
	srand(time(NULL));
	int l=rand()%8+3;
	int v1[l],v2[l],v3[l];
	for(int q=0;q<l;q++){
		v1[q]=rand();
		printf("%d ", v1[q]);
	}
	printf("\n");
	f1(l, v1, v2);
	for(int q=0;q<l;q++){
		printf("%d ", v2[q]);
	}
	printf("\n");
	f2(l, v1, v3);
	for(int q=0;q<l;q++){
		printf("%d ", v3[q]);
	}
	printf("\n");
}

