#include <stdio.h>

int main(){
    int n711 = 1;
    printf("Enter no  : ");
    scanf("%d", &n711);
    int fact711=1;

    int i = 1;

    for (i = n711; i >= 1 ; i--) {
        fact711 = fact711 * i;
    }

    printf("Factorial of %d : %d\n", n711, fact711);
}
