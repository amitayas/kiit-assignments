#include <stdio.h>
int main()
{
    int n1, n2 =1;
    
    printf("Enter numbers : (num1:num2) ");
    scanf("%d:%d",&n1,&n2);
    
    int cp1 = n1;
    int cp2 = n2;
    
    while(cp1!=cp2)
    {
        if(cp1 > cp2)
            cp1 = cp1 - cp2;
        else
            cp2 = cp2 - cp1;
    }
    printf("HCF of %d and %d : %d", n1, n2, cp1);

    return 0;
}

