#include<stdio.h>
int main()
{
    int num1,num2,sum;
    printf("Enter the numbers\n");
    scanf("%d%d",&num1,&num2);
    sum = num1 + num2;
    printf("The addition of %d,%d is %d\n",num1,num2,sum);
    return sum;
}