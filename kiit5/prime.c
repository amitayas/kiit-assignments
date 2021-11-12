#include <stdio.h>

int is_prime(int n){
    int flag = 0;
    int i = 0;
    for ( i = 1; i <= n; i++) {
        if (n%i==0) {
            flag++;
        }
    }

    if (flag==2) {
        return 1;
    }

    return 0;
}

int main(){
    int n = 0;
    printf("Enter a number to check : ");
    scanf("%d", &n);

    if (is_prime(n)) {
        printf("%d is prime!\n", n);
    }
    else {
        printf("%d is not prime!\n", n);
    }
}
