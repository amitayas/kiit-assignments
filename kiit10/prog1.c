#include <stdio.h>

int add_zeros(int n, int no_of_zeroes){
    for (int i = 1; i < no_of_zeroes+1; i++) {
        n = n * 10;
    }
    return n;
}

int length(int n){
    int cp = n;
    int count = 0;
    while (cp>0) {
        count++;
        cp = cp/10;
    }
    return count;
}

int reverse(int n){
    if (n<10) {
        return n;
    }
    return add_zeros((n%10), length(n/10)) + reverse(n/10);
}

int main(){
    int n;
    while (1) {
        printf("Enter no to check palindrome : ");
        scanf("%d", &n);
        if (n>=0) {
            break;
        }
        printf("You need to enter a non negative integer!\n");
    }
    if (reverse(n)==n) {
        printf("%d is palindrome!\n", n);
    }
    else {
        printf("%d is not palindrome!\n", n);
    }
}
