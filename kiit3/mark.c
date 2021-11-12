#include<stdio.h>

int main(){
    int marks;
    printf("Enter mrks : ");
    scanf("%d", &marks);

    char grade = 'O';

    if(marks>=90)
        grade='O';
    else if(marks>=80)
        grade='E';
    else if(marks>=70)
        grade='A';
    else if(marks>=60)
        grade='B';
    else if(marks>=50)
        grade='C';
    else if(marks>=40)
        grade='E';
    else
        grade='F';

    printf(" Grade received : %c\n", grade);

}
