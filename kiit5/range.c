#include <stdio.h>

int main(){
    printf("Enter range : (start:stop) ");
    int a,b;
    scanf("%d:%d", &a, &b);

    int i = a;

    for (i = a; i <= b; i++) {
        printf("%d\n", i);
    }
}
