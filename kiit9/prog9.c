#include <stdio.h>

int sum_of_factors(int n){
    int sum=0;
    for (int i = 1; i < n; i++) {
        if (n%i==0) {
            sum+=i;
        }
    }
    return sum;
}

int main(){
    int n;
    while (1) {
        printf("Enter a no to check : ");
        scanf("%d", &n);
        if (n>0) {
            break;
        }
        printf("You need to enter a positive integer!\n");
    }

    if (sum_of_factors(n)==n) {
        printf("%d is a perfect no!\n", n);
    }
    else {
        printf("%d is not a perfect no!\n", n);
    }
}
