#include<stdio.h>

int main(){
    int sec, hr, min, secf;

    printf("Enter time in seconds : ");
    scanf("%d", &sec);

    hr = sec/3600;
    min = (sec%3600)/60;
    secf = (sec%3600)%60;

    printf("%d secs =  %d hrs, %d min %d sec\n ",sec,hr,min,secf);

}
