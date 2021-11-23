#include <stdio.h>

int main(){
    int i,j;
    int length;
    while (1) {
        printf("Enter length of array :");
        scanf("%d", &length);
        if (length>0) {
            break;
        }
        printf("The length must be a positive integer!\n");
    }

    int arr[length];

    //Populate
    for(i=0;i<length;i++){
        printf("Enter element : ");
        scanf("%d", &arr[i]);
    }
    printf("Populated array :-\n");
    for(i=0;i<length;i++){
        printf("%d\t", arr[i]);
        //scanf("%d", &arr[i]);
    }
    printf("\n");

    //Sorting 
    
    int tmp=0;
    for(i=0;i<length-1;i++){
        for(j=0;j<length-i-1;j++){
            if (arr[j+1]<arr[j]) {
                tmp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=tmp;
            }
        }
    }
    printf("Sorted array :-\n");
    for(i=0;i<length;i++){
        printf("%d\t", arr[i]);
        //scanf("%d", &arr[i]);
    }
    printf("\n");


    int smallest=arr[0];
    int largest=arr[length-1];
    int second_smallest;
    int second_largest;

    for(i=0;i<length;i++){
        if (arr[i]>smallest) {
            second_smallest=arr[i];
            break;
        }
    }

    for(i=length-1;i>=0;i--){
        if (arr[i]<largest) {
            second_largest=arr[i];
            break;
        }
    }

    printf("Second smallest : %d \nSecond largest : %d", second_smallest, second_largest);
}
