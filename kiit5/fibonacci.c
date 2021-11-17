#include <stdio.h>

int main(){
    int n711 = 0;
    printf("How many fibo nums to generate? ");
    scanf("%d", &n711);

    int timinus1 = -1;
    int ti = 1;
    int tmp = 0;
    int count = 1;

    while (1) {
        tmp = ti;
        ti = ti + timinus1;
        timinus1 = tmp;
        printf("%d\t", ti);
        count++;
        if (count>n711) {
            break;
        }
    }
}
