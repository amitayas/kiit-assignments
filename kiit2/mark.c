#include<stdio.h>

int main(){
    float marks[5];
    
    //populate array
    int i=0;
    for(i=0 ; i<5 ; i++){
        printf("Enter marks for subject %d : ", (i+1));
        scanf("%f", (marks+i));
    }
    
    //i=0;
    //for(i= 0 ; i<5 ; i++){
    //    printf("%f\t", marks[i]);
    //}


    printf("\n");
    
    float total = 0;
    for(i= 0 ; i<5 ; i++){
        total = total + marks[i]; 
    }

    float percentage = total/500.00 * 100.00;

    printf("Percentage : %f\n", percentage);

}
