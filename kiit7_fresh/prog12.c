/*WAP to swap the pair of elements starting from beginning.*/

#include <stdio.h>

int main(){
    int i,j;
    int length;
    
    while (1) {
        printf("Enter length of array : ");
        scanf("%d", &length);
        if (length>0 && length%2==0) {
            break;
        }
        printf("Length of array must be a positive even integer!\n");
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
    printf("\n");

    //Swap
    int tmp=0;
    for ( i = 0; i < length; i+=2) {
        tmp = arr[i];
        arr[i]=arr[i+1];
        arr[i+1]=tmp;
    }
    
    printf("\nSwapped Array :-\n\n");
    for ( i = 0; i < length; i++) {
        printf("%d\t", arr[i]);
    }
    printf("\n");

}
