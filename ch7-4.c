#include<stdio.h>
void chline(char ch, int i, int j) {
    for(int q=0; q<i; q++) printf(" ");
    for(int q=i; q<=j; q++) printf("%c", ch);
    printf("\n");
}
int main() {
    chline('a', 0, 6);
    chline('b', 1, 5);
    chline('c', 3, 4);
    chline('d', 4, 5);
    chline('+', 2, 7);
    chline('-', 5, 8);
    chline('*', 4, 5);
    chline('/', 3, 6);
}

