#include <stdio.h>

int main(){
    int n = 0;

    while (1) {
        printf("Enter a no :");
        scanf("%d", &n);

        if (n>0 && n<100000) {
            break;
        }

        printf("Need to enter a positive no with maximum 5 digits!\n");


    }

    int cp = n;
    int s = 0;

    while (cp>0) {
        s = s*10 + cp%10;
        cp = cp/10;
    }

    printf("Reverse no : %d\n", s);

}
