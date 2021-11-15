#include <stdio.h>

int main() {
    int n,i,j;
    
    while (1) {
        printf("Enter no of rows : ");
        scanf("%d", &n);

        if (n>0) {
            break;
        }

        printf("You must enter a positive integer!\n");
    }

    for(i = 1; i <= n; i++) {
        for(j = 1; j <= n-i; j++)
            printf(" ");
        for(j = 1; j <= i; j++)
            printf("1 ");

        printf("\n");
    }
   return 0;
}
