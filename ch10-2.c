#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void act(int m, int n, float v[m][n]){
	for(int q=0;q<m;q++){
		for(int w=0;w<n;w++){
			v[q][w]*=2;
		}
	}
}
void show(int m, int n, float v[m][n]){
	for(int q=0;q<m;q++){
		for(int w=0;w<n;w++){
			printf("%.2f\t", v[q][w]);
		}
		printf("\n");
	}
}
int main(){
	srand(time(NULL));
	int m=rand()%8+2,n=rand()%8+2;
	float v[m][n];
	for(int q=0;q<m;q++){
		for(int w=0;w<n;w++){
			v[q][w]=rand()%10000/100.0;
		}
	}
	show(m, n, v);
	printf("\n");
	act(m, n, v);
	show(m, n, v);
}

