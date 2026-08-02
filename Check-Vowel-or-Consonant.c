// Check Enter Alphabet is Vowel or Consonant
#include<stdio.h>
int main()
{
    char c;
    printf("Enter your character=");
    scanf("%c",&c);
    if(c>='a' & c<='z' | c>='A' & c<='Z'){
        if(c=='a' | c=='e' | c=='i' | c=='o' | c=='u' | c=='A' | c=='E' | c=='I' | c=='O' | c=='U'){
            printf("It is vowel");
        }
        else{
            printf("It is consonant");
        }
    }
    else{
        printf("Invalid character");
    }
}