/*WAP to Check whether the number is EVEN or ODD, without using any arithmetic or
relational operators*/

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
