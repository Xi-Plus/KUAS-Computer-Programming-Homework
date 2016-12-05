#include<stdio.h>
int main() {
    char mode;
	int money;
    while(printf("mode(A, B, C, D, or Q for exit):"),scanf("%c",&mode),mode!='Q'&&mode!='q') {
    	fflush(stdin);
        if(!((mode>='A'&&mode<='D')||(mode>='a'&&mode<='d'))) {
            printf("mode error\n");
            continue;
        }
        printf("money:");
        scanf("%d", &money);
        double ans=0;
        switch(mode){
        	case 'A':
        	case 'a':
        		ans+=(money>0?money*15/100.0:0)+(money>17850?(money-17850)*(28-15)/100.0:0);
        		break;
        	case 'B':
        	case 'b':
        		ans+=(money>0?money*13/100.0:0)+(money>23900?(money-23900)*(26-13)/100.0:0);
        		break;
        	case 'C':
        	case 'c':
        		ans+=(money>0?money*13/100.0:0)+(money>29750?(money-29750)*(26-13)/100.0:0);
        		break;
        	case 'D':
        	case 'd':
        		ans+=(money>0?money*14/100.0:0)+(money>14875?(money-14875)*(27-14)/100.0:0);
        		break;
		}
        printf("ans:%.2lf\n", ans);
        fflush(stdin);
    }
}

