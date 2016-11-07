#include<stdio.h>
#include<conio.h>
int main(){
	char c;
	while(1){
		if(kbhit()){
			c=getch();
			if(c==26)
				break;
			switch(c){
				case 8:
					printf("\\b\n");
					break;
//				case '\n':
//					printf("\\n\n");
//					break;
				case '\r':
					printf("\\r\n");
					break;
				case '\t':
					printf("\\t\n");
					break;
				default:
					printf("%c %d\n",c,c);
					break;
			}
		}
	}
}

