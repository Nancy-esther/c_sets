#include<stdio.h>
int input();
int add(int a, int b);
void output(int a, int b, int sum);
int main()
{
    int a,b,sum;
    input();
    add(a,b);
    output(a,b,sum);
}
input()
{
    int a,b;
    a=input();
    b=input();
}
add(a,b)
{
    printf("Enter the first and second number:");
    scanf("%d%d",&a,&b);
}