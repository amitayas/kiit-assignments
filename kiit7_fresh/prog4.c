#include <stdio.h>

int main(){
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
    int n = 0;

    int i = 0;
    for(i=0 ; i < length ; i++){
        printf("Enter a no to store : ");
        scanf("%d", &n);

        *(arr+i) = n;
    }

    printf("\nPopulated array :-\n\n");
    
    for ( i = 0; i < length; i++) {
        printf("%d \t", *(arr+i));
    }

    int num = 0;
    printf("\n\nEnter no to search : ");
    scanf("%d", &num);
    int pos = -1;
    for ( i = 0; i <length; i++) {
        if (*(arr+i)==num) {
            pos = i;
        }
    }

    if (pos==-1) {
        printf("Number not found!\n");
    }
    else {
        printf("Number found at position : %d(starting from 1)\n", (pos+1));
    }
}
