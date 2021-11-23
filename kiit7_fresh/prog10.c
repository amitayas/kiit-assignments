#include <stdio.h>

int main(){
    int i,j;
    int mat1[3][3];
    int mat2[3][3];

    printf("We are going to populate matrix 1 first :-\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("Enter element : ");
            scanf("%d", &mat1[i][j]);
        }
    }
    
    printf("Populated matrix(1) :-\n");
    for ( i = 0; i < 3; i++) {
        for ( j = 0; j < 3; j++) {
            printf("%d\t", mat1[i][j]);
            //scanf("%d", &mat[i][j]);
        }
        printf("\n");
    }

    printf("Now we will populate the second matrix :-\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("Enter element : ");
            scanf("%d", &mat2[i][j]);
        }
    }

    printf("Populated matrix(2) :-\n");
    for ( i = 0; i < 3; i++) {
        for ( j = 0; j < 3; j++) {
            printf("%d\t", mat2[i][j]);
            //scanf("%d", &mat[i][j]);
        }
        printf("\n");
    }

    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            mat1[i][j]=mat2[i][j]-mat1[i][j];
        }
    }

    printf("Difference :-\n");
    for ( i = 0; i < 3; i++) {
        for ( j = 0; j < 3; j++) {
            printf("%d\t", mat1[i][j]);
            //scanf("%d", &mat[i][j]);
        }
        printf("\n");
    }

}
