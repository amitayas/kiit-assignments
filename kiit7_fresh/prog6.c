/*WAP to read the elements of 3 X 3 matrix and change all even numbers to 1 and odd
numbers to 0.*/

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

    for ( i = 0; i < 3; i++) {
        for ( j = 0; j < 3; j++) {
            
            if (mat[i][j]%2==0) {
                mat[i][j]=1;
            }
            else {
                mat[i][j]=0;
            }
            
            //printf("Enter element : ");
            //scanf("%d", &mat[i][j]);
        }
    }

    printf("Transformed matrix :-\n");
    for ( i = 0; i < 3; i++) {
        for ( j = 0; j < 3; j++) {
            printf("%d\t", mat[i][j]);
            //scanf("%d", &mat[i][j]);
        }
        printf("\n");
    }

}
