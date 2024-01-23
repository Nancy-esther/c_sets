#include<stdio.h>
#include<math.h>
int input();
int find_gcd(int a, int b);
void output(int a, int b, int gcd);
int input()
{
    int a;
   printf("Enter:");
   scanf("%d",&a);
   return a;
}
int find_gcd(int a,int b)
{
   
   if(b==0)
   return a;
      return gcd(b,a % b);
}
void output(int a,int b,int gcd)
{
    printf("%d and %d is %d",a,b,find_gcd);
}
int main()
{
    int a,b,gcd;
   a=input();
   b=input();
   find_gcd(a,b);
   output(a,b,gcd);
}