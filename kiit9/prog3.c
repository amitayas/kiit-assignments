#include <stdio.h>

int is_prime(int n){
    int flag=0;
    for (int i = 1; i < n+1; i++) {
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
    int n;
    while (1) {
        printf("Enter a no to check : ");
        scanf("%d", &n);
        if (n>0) {
            break;
        }
        printf("You need to enter a positive integer!\n");
    }
    if (is_prime(n)) {
        printf("%d is a prime number!\n", n);
    }
    else {
        printf("%d is not a prime number!\n", n);
    }
}
