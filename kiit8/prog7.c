#include <stdio.h>

int main(){
    int n;
    printf("Enter a no check for odd/even : ");
    scanf("%d", &n);
    if (n & 1) {
        printf("%d is odd!\n", n);
    }
    else {
        printf("%d is even!\n", n);
    }
}
