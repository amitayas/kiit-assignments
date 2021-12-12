#include <stdio.h>

int sum_of_nat_nos(int n){
    if (n==1) {
        return 1;
    }
    return n + sum_of_nat_nos(n-1);
}

int main(){
    int n;
    while (1) {
        printf("Enter a no : ");
        scanf("%d", &n);
        if (n>0) {
            break;
        }
        printf("You need to enter a positive integer!\n");
    }
    printf("Sum of natural nos upto %d : %d\n", n, sum_of_nat_nos(n));
}
