// Check Palindrome number
#include<stdio.h>
int main()
{
    int rev=0,rem,num;
    printf("Enter your number=");
    scanf("%d",&num);
    int n=num;
    do{
        rem=num%10;
        rev=rev*10+rem;
        num/=10;
    }
    while(num!=0);
    printf("%d\n",rev);
    if(n==rev){
        printf("It is Palindrome Number");
    }
    else{
        printf("It is not Palindrome number");
    }
}