#include <stdio.h>

int generate_cube(int n){
    return n*n*n;
}

int is_armstrong(int n){
    int cp=n;
    int sum=0;
    while (cp>0) {
        sum = sum + generate_cube(cp%10);
        cp = cp/10;
    }
    if (sum==n) {
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
    if (is_armstrong(n)) {
        printf("%d is an armstrong no!\n", n);
    }
    else {
        printf("%d is not an armstrong no!\n", n);
    }
}
