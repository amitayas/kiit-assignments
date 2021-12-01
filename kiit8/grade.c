#include <stdio.h>

int main(){
    float mat[5][5];

    //Populate matrix
    for (int i = 0; i < 5; i++){
        printf("Enter roll no for student %d : \n", (i+1));
        scanf("%d", mat[i][0]);

    }
}
