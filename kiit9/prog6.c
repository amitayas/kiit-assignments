#include <stdio.h>

int sum_of_digits(int n){
    int s = 0;
    int cp = n;
    while (cp>0) {
        s = s + cp%10;
        cp = cp/10;
    }
    return s;
}

int main(){
    int n;
    while (1) {
        printf("Enter a no : ");
        scanf("%d", &n);
        if (n>=0) {
            break;
        }
        printf("You need to enter a non negative integer!\n");
    }
    printf("Sum of digits of %d : ", sum_of_digits(n));
}
