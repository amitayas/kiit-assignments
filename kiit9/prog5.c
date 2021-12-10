#include <stdio.h>

int factorial(int n){
    int fact=1;
    for (int i = n; i > 0; i--) {
        fact = fact * i;
    }
    return fact;
}

int main(){
    int n;
    while (1) {
        printf("Enter a no : ");
        scanf("%d", &n);
        if (n>=0) {
            break;
        }
        printf("You need to enter a positive integer!\n");
    }
    printf("Factorial of %d : %d\n", n, factorial(n));
}
