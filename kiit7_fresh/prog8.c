/*WAP to read the elements of 3 X 3 matrix and print the lower triangular matrix.*/

#include <stdio.h>

int main(){
    int mat[3][3];
    int n;
    int i,j;
    for ( i = 0; i < 3; i++) {
        for ( j = 0; j < 3; j++) {
            printf("Enter element : ");
            scanf("%d", &mat[i][j]);
        }
    }
    
    printf("Populated matrix :-\n");
    for ( i = 0; i < 3; i++) {
        for ( j = 0; j < 3; j++) {
            printf("%d\t", mat[i][j]);
            //scanf("%d", &mat[i][j]);
        }
        printf("\n");
    }

    printf("\nLower triangular matrix :-\n");
    for ( i = 0; i < 3; i++) {
        for ( j = 0; j <= i; j++) {
            printf("%d\t", mat[i][j]);
        }
        printf("\n");
    }

}
