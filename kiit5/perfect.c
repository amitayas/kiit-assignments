#include <stdio.h>

int main(){
    int n = 0;
    printf("Enter a no : ");
    scanf("%d", &n);

    int s = 0;

    int i = 0;
    for (i = 1; i < n ; i++) {
        if (n%i==0) {
            s=s+i;
        }
    }

    if (s==n) {
        printf("%d is a perfect no!\n", n);
    }
    else {
        printf("%d is not a perfect no!\n", n);
    }
}
