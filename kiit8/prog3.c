#include <stdio.h>

int main(){
    int n;
    while (1) {
        printf("Enter length of array : ");
        scanf("%d", &n);
        if (n>0) {
            break;
        }
        printf("Array length must be a positive integer!\n");
    }
    //Populate Array
    int arr[n];
    for (int i = 0; i < n; i++) {
        printf("Enter element : ");
        scanf("%d", (arr+i));
    }

    for (int i = 0; i < n-1; i++) {
        for (int j = i+1; j < n; j++) {
            if (arr[j]==arr[i]) {
                for (int k = j+1; k < n; k++) {
                    arr[k-1]=arr[k];
                }
                j--;
                n--;
            }
        }
    }

    for (int i = 0; i < n; i++) {
        printf("%d\t", arr[i]);
    }
}
