#include<stdio.h>
#include<math.h>
int main(){
    float a,b,c, root1, root2, D, rp, ip;
    printf("Enter coefficient a : ");
    scanf("%f", &a);
    printf("Enter coefficient b : ");
    scanf("%f", &b);
    printf("Enter coefficient c : ");
    scanf("%f", &c);

    D = b*b-4*a*c;

    if (D > 0) {
        root1 = (-b + sqrt(D)) / (2 * a);
        root2 = (-b - sqrt(D)) / (2 * a);
        printf("root1 = %f ; root2 = %f", root1, root2);
    }

    else if (D == 0) {
        root1 = root2 = -b / (2 * a);
        printf("root = %f;", root1);
    }

    else {
        rp = -b / (2 * a);
        ip = sqrt(-D) / (2 * a);
        printf("root1 = %f+%fi and root2 = %f-%fi", rp, ip, rp, ip);
    }
}
