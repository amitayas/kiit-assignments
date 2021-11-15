#include <stdio.h>

int main(){
    int n = 4;

    while (1) {
        printf("Enter no of terms : ");
        scanf("%d", &n);

        if (n>0) {
            break;
        }

        printf("You must enter a positive integer!\n");
    }


    int i, j=1;
    int  s = 0;
    int prod = 1;

    for(i=1 ; i<=n ; i++){
        prod = 1;
        for(j=1;j<=i;j++){
            prod = prod * j;
        }
        
        s = s + prod;
    }

    printf("Sum : %d\n", s);
}
