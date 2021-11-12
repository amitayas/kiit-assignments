#include<stdio.h>

int main(){
    int marks;
    printf("Enter mrks : ");
    scanf("%d", &marks);

    char grade = 'O';

    if (marks>=40) {
        if (marks>=50) {
            if (marks>=60) {
                if (marks>=70) {
                    if (marks>=80) {
                        if (marks>=90) {
                            grade = 'O';
                        }
                        else {
                            grade = 'E';
                        }
                    }
                    else {
                        grade = 'A';
                    }
                }
                else {
                    grade = 'B';
                }
            }
            else {
                grade = 'C';
            }
        }
        else {
            grade = 'D';
        }
    }
    else {
        grade = 'F';
    }

    printf(" Grade received : %c\n", grade);

}
