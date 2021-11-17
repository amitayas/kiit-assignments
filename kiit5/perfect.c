#include <stdio.h>

int main(){
    int n711 = 0;
    printf("Enter a no : ");
    scanf("%d", &n711);

    int s = 0;

    int i = 0;
    for (i = 1; i < n711 ; i++) {
        if (n711%i==0) {
            s=s+i;
        }
    }

    if (s==n711) {
        printf("%d is a perfect no!\n", n711);
    }
    else {
        printf("%d is not a perfect no!\n", n711);
    }
}
