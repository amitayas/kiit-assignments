#include<stdio.h>

int main(){
    int h;
    printf("Enter height : ");
    scanf("%d", &h);
    //control var
    int i,j;
    
    //Right triangle:-
    printf("Right triangle:-\n");
    for (i = 1; i <= h; ++i) {
        for (j = 1; j <= i; ++j) {
            printf("* ");
        }
        printf("\n");
    }
    

    //Isoceles triangle:-
    printf("\n\nIsoceles triangle:-\n");
    int blank_space, k = 0;
    for (i = 1; i <= h; ++i, k = 0) {
        for (blank_space = 1; blank_space <= h - i; ++blank_space) {
        printf("  ");
        }
    while (k != 2 * i - 1) {
        printf("* ");
        ++k;
    
    }
    printf("\n");
   }
}
