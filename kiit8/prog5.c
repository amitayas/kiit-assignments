#include <stdio.h>

int add_zeros(int n, int z){
    int cp=n;
    for (int i = 1; i <= z; i++) {
        cp = cp*10;
    }
    return cp;
}

int main(){
    int n;
    while (1) {
        printf("Enter a +ve no in decimal format : ");
        scanf("%d", &n);
        if (n>=0) {
            break;
        }
        printf("You must enter a +ve integer!\n");
    }
    int n_in_binary=0;
    int cp=n;
    int len = 0;
    while (cp>0) {
        n_in_binary = add_zeros((cp%2), len++) + n_in_binary;
        cp = cp/2;
    }
    printf("%d in binary : %d", n, n_in_binary);
}
