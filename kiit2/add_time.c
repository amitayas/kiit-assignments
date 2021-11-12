#include<stdio.h>

int main(){
    printf("Enter time 1 : ");
    int h1, m1, s1;
    scanf("%d:%d:%d", &h1, &m1, &s1);
    //printf("Time entered : %d:%d:%d\n", h1, m1, s1);
    
    printf("Enter time 2 : ");
    int h2, m2, s2;
    scanf("%d:%d:%d", &h2, &m2, &s2);
    //printf("Time entered : %d:%d:%d\n", h2, m2, s2);

    s1 = s1 + m1*60 + h1*60*60;
    s2 = s2 + m2*60 + h2*60*60;

    int h, m, s;

    s = s1 + s2;
    
    h = s/3600;
    m = (s%3600)/60;
    s = (s%3600)%60;
    
    printf("\nAdded time : %d:%d:%d\n", h, m, s);
} 
