#include<stdio.h>
int input_number();
int is_composite(int n);
void output(int n, int result);
int main()
{
    int n,result;
     input_number();
     is_composite(n);
     output(n,result);
}
int input_number()
{
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    return n;
}
int is_composite(int n)
{
    int i;
    if(n<=1)
    return 0;
}
    for(i=2;i<=n/2;i++)
    {
    if(n%i==0)
    {
        return 1;
    }
       return 0;
}
void output(int n, int result)
{
    printf("The number is a composite number %d",n);

}