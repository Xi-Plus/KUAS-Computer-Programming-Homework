#include<stdio.h>
struct T{
	int c;
	int n;
}cnt[127];
int main(){
	char c;
	int v[127]={0};
	v[' ']=1;
	v['\t']=1;
	v['\n']=2;
	cnt[1].n=0;
	cnt[2].n=0;
	int use=2;
	while((c=getchar())!='#'){
//		printf("read: %c\n", c);
		if(v[c]==0){
			use++;
//			printf("new at %d\n", use);
			cnt[use].c=c;
			cnt[use].n=1;
			v[c]=use;
		} else {
			cnt[v[c]].n++;
//			printf("old at %d cnt = %d\n", v[c], cnt[v[c]].n);
		}
	}
	printf("' '\t'\\n'\t");
	for(int q=3;q<=8&&q<=use;q++){
		printf("%c\t", cnt[q].c);
	}
	printf("\n");
	printf("%d\t%d\t", cnt[1].n, cnt[2].n);
	for(int q=3;q<=8&&q<=use;q++){
		printf("%d\t", cnt[q].n);
	}
	printf("\n");
	for(int q=9;q<=use;q+=8){
		for(int w=q,e=1;w<=use&&e<=8;w++,e++){
			printf("%c\t", cnt[w].c);
		}
		printf("\n");
		for(int w=q,e=1;w<=use&&e<=8;w++,e++){
			printf("%d\t", cnt[w].n);
		}
		printf("\n");
	}
}

