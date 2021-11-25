/*Program to copy an array to another array*/
#include <stdio.h>

int main(){
    int i,j;
    int length;
    
    while (1) {
        printf("Enter length of array : ");
        scanf("%d", &length);
        if (length>0) {
            break;
        }
        printf("Length of array must be a positive integer!\n");
    }

    int arr[length];
    
    //Populate Array:-
    for(i=0;i<length;i++){
        printf("Enter element :");
        scanf("%d", &arr[i]);
    }
    printf("Original Array :-\n\n");
    for ( i = 0; i < length; i++) {
        printf("%d\t", arr[i]);
    }
    printf("\n\n");
    
    //Copy array:-
    int cp[length];
    for ( i = 0; i < length; i++) {
        cp[i]=arr[i];
    }

    printf("Copied Array :-\n\n");
    for ( i = 0; i < length; i++) {
        printf("%d\t", cp[i]);
    }

}
