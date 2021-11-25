/*WAP to find out the sum of the row and column elements stored in a matrix.*/

#include <stdio.h>

int main(){
    int i,j;
    int m,n;

    while (1) {
        printf("Enter no of rows and columns : (rows:columns) ");
        scanf("%d:%d", &m, &n);
        if (m>0 && n>0) {
            break;
        }
        printf("You need to enter positive integers!\n");
    }
    
    int mat[m][n];
    
    for ( i = 0; i < m; i++) {
        for(j=0; j<n ;j++){
            printf("Enter element : ");
            scanf("%d", &mat[i][j]);
        }
    }

    printf("Populated matrix :-\n");
    for ( i = 0; i < m; i++) {
        for ( j = 0; j < n; j++) {
            printf("%d\t", mat[i][j]);
            //scanf("%d", &mat[i][j]);
        }
        printf("\n");
    }
    


    int sum_row = 0;
    int sum_column = 0;

    printf("Sum of rows :-\n");
    for(i=0;i<m;i++){
        sum_row = 0;
        for(j=0;j<n;j++){
            sum_row+=mat[i][j];
        }
        printf("Sum of row %d : %d \n", (i+1), sum_row);
    }

    printf("Sum of columns :-\n");
    for(j=0;j<n;j++){
        sum_column=0;
        for(i=0;i<m;i++){
            sum_column+=mat[i][j];
        }
        printf("Sum of column %d : %d\n", (j+1), sum_column);
    }
}
