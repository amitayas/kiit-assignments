#include <stdio.h>

int main(){
    int mat[5][5];
    int n;
    int i,j;
    for ( i = 0; i < 5; i++) {
        for ( j = 0; j < 5; j++) {
            printf("Enter element : ");
            scanf("%d", &mat[i][j]);
        }
    }
    
    printf("Populated matrix :-\n");
    for ( i = 0; i < 5; i++) {
        for ( j = 0; j < 5; j++) {
            printf("%d\t", mat[i][j]);
            //scanf("%d", &mat[i][j]);
        }
        printf("\n");
    }

    int s = 0;

    for ( i = 0; i < 5; i++) {
        for ( j = 0; j < 5; j++) {
            if (i==j || ((4-j)==i)) {
                s += mat[i][j];
            }
        }
    }

    printf("Sum of diagonal elements : %d\n", s);
}
