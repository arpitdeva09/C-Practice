#include<stdio.h>
int main() 
{
    int a,b;
    char op;
    printf("Enter your first number=");
    scanf("%d",&a);
    printf("Enter your second number=");
    scanf("%d",&b);
    printf("Enter operator=");
    scanf(" %c",&op);
    switch(op){
        case '+' : printf("The sum of the number is=%d",a+b);
        break;
        case '-' : printf("The subtraction of the number is=%d",a-b);
        break;
        case '*' : printf("The multiplication of the number is=%d",a*b);
        break;
        case '/' : if(b!=0){
            printf("The division of the number is=%d",a/b);
        }
        else{
            printf("Error");
        }
        break;
        case '%' : printf("The modulus of the number is=%d",a%b);
        break;
    }
}
