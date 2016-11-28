#include<stdio.h>
int main(){
	int n;
	int v[100];
	int use=0;
	int as=0,an=0,bs=0,bn=0;
	while(scanf("%d", &n),n){
		if(n&1){
			bs+=n;
			bn++;
		}else{
			as+=n;
			an++;
		}
		v[++use]=n;
	}
	printf("%d %.2lf %d %.2lf\n", an, (double)as/an, bn, (double)bs/bn);
	for(int q=1;q<=use;q+=8){
		for(int w=q,e=1;w<=use&&e<=8;w++,e++){
			printf("%d->%d\t", v[w], v[w]+1);
		}
		printf("\n");
	}
}

