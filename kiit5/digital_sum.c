#include<stdio.h>

int main(){
    int n711=0;
    
    printf("Enter a number : ");
    scanf("%d", &n711);
    

    int s711 = 0;
    int cp711 = n711;

    while(cp711>0){
        s711 = s711 + cp711%10;
        cp711 = cp711/10;
    }

    printf("Sum of digits : %d\n", s711);
}
