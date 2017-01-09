#include<stdio.h>
void selection_sort(int *v, int l){
	if(l>1){
		int max=-2147483647,mi;
		for(int q=0;q<l-1;q++){
			if(v[q]>max){
				max=v[q];
				mi=q;
			}
		}
		if(max>v[l-1]){
			v[l-1]^=v[mi]^=v[l-1]^=v[mi];
		}
		selection_sort(v, l-1);
	}
}
int main(){
	int v[100], n;
	while(1){
		printf("How many? ");
		scanf("%d", &n);
		if(n<=0)break;
		printf("Input %d numbers: ", n);
		for(int q=0;q<n;q++){
			scanf("%d", &v[q]);
		}
		selection_sort(v, n);
		printf("after sorting: ");
		for(int q=0;q<n;q++){
			printf("%d ", v[q]);
		}
		printf("\n");
	}
}

