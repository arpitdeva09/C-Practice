// This Program check only 3 digit number.
// A number equal to the sum of its own digits each raised to the power of the total number of digits is known as Armstrong Number.
// Like ( 153 = 1^3 + 5^3 + 3^3 = 1 + 125 + 27 = 153).
#include<stdio.h>
int main()
{
    int num, digit, sum=0;
    printf("Enter Your 3 digit number=");
    scanf("%d",&num);
    int n=num;
    while(num!=0){
        digit=num%10;
        sum+= (digit*digit*digit);
        num/=10;
    }
    if(sum == n){
        printf("Number is Armstrong");
    }
    else{
        printf("Number is NOT Armstrong");
    }
}