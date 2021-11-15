#include <stdio.h>

int main(){
    int n =0;
    printf("Enter value of n : ");
    scanf("%d", &n);

    char c;

    while (n>0) {
        printf("ENter char : ");
        c = getchar();
        printf("\n%d\n", c);
        n++;
    }
}
