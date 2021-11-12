#include <stdio.h>

int main(){
    int n = 1;
    printf("Enter no  : ");
    scanf("%d", &n);
    int fact=1;

    int i = 1;

    for (i = n; i >= 1 ; i--) {
        fact = fact * i;
    }

    printf("Factorial of %d : %d\n", n, fact);
}
