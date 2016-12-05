#include<stdio.h>
int main() {
    int data[5][3]= {
        {},
        {17850,15,28},
        {23900,13,26},
        {29750,13,26},
        {14875,14,27}
    };
    int mode,money;
    while(printf("mode(1, 2, 3, 4, or 0 for exit):"),scanf("%d",&mode),mode) {
        if(mode<0||mode>4) {
            printf("mode error");
            continue;
        }
        printf("money:");
        scanf("%d", &money);
        double ans=0;
        if(money>0) {
            ans+=money*data[mode][1]/100.0;
        }
        if(money>data[mode][0]) {
            ans+=(money-data[mode][0])*(data[mode][2]-data[mode][1])/100.0;
        }
        printf("ans:%.2lf\n", ans);
    }
}

