// C Program to find the Sum of Two Matrices of order 2x2 entered by user
#include<stdio.h>

int main()
{
    float a[2][2], b[2][2], result[2][2];

    // Taking input of 1st Matrix by nested for loop
    printf("Enter the element of Matrix A=\n");
    
    for(int i=0 ; i<2 ; i++){
        for(int j=0 ; j<2 ; j++){
            printf("Enter A[%d][%d]:", i+1, j+1);
            scanf("%f", &a[i][j]);
        }
    }

    // Taking input of 2nd Matrix by nested for loop
    printf("Enter the element of Matrix B=\n");

    for(int i=0 ; i<2 ; i++){
        for(int j=0 ; j<2 ; j++){
            printf("Enter B[%d][%d]:", i+1, j+1);
            scanf("%f", &b[i][j]);
        }
    }

    //Adding of corresponding elements of Two Arrays
    for(int i=0 ; i<2 ; i++){
        for(int j=0 ; j<2 ; j++){
            result[i][j] = a[i][j]+b[i][j];
        }
    }

    //Display Result
    printf("\nSum of Matrix\n");

    for(int i=0 ; i<2 ; i++){
        for(int j=0 ; j<2 ; j++){
            printf("%2f\t", result[i][j]);
        }
        printf("\n");
    }
    return 0;
}