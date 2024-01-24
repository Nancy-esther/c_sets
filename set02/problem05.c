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
  while (b!=0)
  {
    int temp =b;
    b = a % b;
    a = temp;
  }
   return a;
  }
  /* int hcf;
  for (int i=2;i<=a && i<=b;i++)  
  {
    if(a%i==0 && b%i==0)
    {
        hcf=i;
    }
  }
return hcf; }*/

void output(int a,int b,int gcd)
{
    printf("%d and %d is %d",a,b,gcd);
}
int main()
{
    int a,b;
   a=input();
   b=input();
   int gcd = find_gcd(a,b);
   output(a,b,gcd);
}