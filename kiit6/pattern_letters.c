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

    char c = 'A';
    for(i = 1 ; i <= n ; i++){
        for (j = 0; j<i ; j++){
            printf("%c ", (c+j));
        }
        printf("\n");
    }

    return 0;
}
