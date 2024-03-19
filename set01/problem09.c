//the [square root](https://en.wikipedia.org/wiki/Methods_of_computing_square_roots#Babylonian_method) of a number.
#include<stdio.h>
float input();
float square_root(float n);
void output(float n, float sqrroot);
int main()
{
  float n,sqrroot;
  n = input();
  sqrroot = square_root(n);
  output(n,sqrroot);
  return 0;
}
float input()
{
   int n;
   printf("Enter");
   scanf("%d",&n);
   return n;
}
float square_root(float n)
{
  float a = n;
  float b = 1;
  float e =0.000001;
  while(a-b>e)
  {
      a=(a+b)/2;
      b= n/a;
  }
  return a;
}
void output(float n, float sqrroot)
{
  printf("Square root of %.1f is %.1f",n,sqrroot);
}



