#include <stdio.h>
 
void reverese(int arr[], int u, int v)
{
    int tmp;
    if (u >= v)
        return;
    tmp = arr[u];  
    arr[u] = arr[v];
    arr[v] = tmp;
    reverese(arr, u+1, v-1);  
}    
 
 
int main()
{
    //int arr[30];
    int n;
    while (1) {
        printf("Enter length of array : ");
        scanf("%d", &n);
        if (n>0) {
            break;
        }
        printf("Length of array must be a positive integer!\n");
    }
    int arr[n];
    for (int i = 0; i < n; i++) {
        printf("Enter an element : ");
        scanf("%d", (arr+i));
    }
    reverese(arr, 0, (n-1));
    for (int i = 0; i < n; i++) {
        printf("%d\t", arr[i]);
        //scanf("%d", (arr+i));
    }

}
