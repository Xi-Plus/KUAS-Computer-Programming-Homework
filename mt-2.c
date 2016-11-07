#include<stdio.h>
int setbits(int x, int p, int n, int y){
	return ((x>>(p-n+1))&((1<<n)-1))|(y>>n<<n);
}
int invert(int x, int p, int n){
	return x^=((1<<n)-1)<<(p-n+1);
}
int main(){
	printf("%d\n", setbits(255,4,3,136));
	printf("%d\n", invert(255,4,3));
}

