#include <stdio.h>

int main() 
{
    int a,b,sum,sub,mul,n;
    printf("Enter the first No...\n");
    scanf("%d",&a);
    printf("Enter the second No...\n");
    scanf("%d",&b);
    
    printf("1.Addition\n");
    printf("2.Subtraction\n");
    printf("3.Multiplication\n");
    printf("Enter your choise: ");
    scanf("%d",&n);
    switch(n)
    {
        case 1:sum=a+b;
   
            printf("The sum is..%d",sum);
            break;

        case 2:sub=a-b;
            printf("The sub is%d..",sub);
            break;

        case 3:mul=a*b;
            printf("The multiplication is..%d",mul);
            break; 
            return 0 ; 
    }
}