#include <stdio.h>

int main(){
    int n711 = 1;

body:
    printf("%d \t", n711);

    if (n711<100) {
        n711++;
        goto body;
    }
}
