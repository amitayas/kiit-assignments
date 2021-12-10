#include <stdio.h>

int is_even(int n){
    if (n%2 == 0) {
        return 1;
    }
    return 0;
}

int main(){
    int n;
    printf("Enter a no to check for odd/even : ");
    scanf("%d", &n);
    if (is_even(n)) {
        printf("\n%d is even!\n", n);
    }
    else {
        printf("\n%d is odd!\n", n);
    }
}
