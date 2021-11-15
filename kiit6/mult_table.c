#include <stdio.h>

int main ()
{
    int i = 1;
    int j = 1;
    int n;
    while (1) {
        printf("Enter value of n : ");
        scanf("%d", &n);

        if (n>0) {
            break;
        }

        printf("You must enter a positive integer!\n");
    }

    
    for (i = 1 ; i <= n ; i++) {
        for (j = 1; j <=10 ; j++) {
            printf("%d * %d = %d\n", i , j , (i*j));
        }
        printf("\n");
    }

    return 0;
}
