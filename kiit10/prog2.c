#include <stdio.h>

int no_of_even_digits(int n){
    if (n<10) {
        if (n%2==0) {
            return 1;
        }
        return 0;
    }

    if ((n%10)%2==0) {
        return 1+no_of_even_digits(n/10);
    }
    return no_of_even_digits(n/10);
}

int main(){
    int n;
    while (1) {
        printf("Enter a no : ");
        scanf("%d", &n);
        if (n>=0) {
            break;
        }
        printf("ou need to enter a non negative integer!\n");
    }
    printf("No of even digits in %d : %d", n, no_of_even_digits(n));
}
