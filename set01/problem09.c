//the [square root](https://en.wikipedia.org/wiki/Methods_of_computing_square_roots#Babylonian_method) of a number.
#include<stdio.h>
float input();
float square_root(float n);
void output(float n, float sqrroot);
int main()
{
  float n,sqrroot;
  n=input();
  sqrroot=square_root(n);
  output(n,sqrroot);
  return 0;
}
float input()
{
  float n;
  printf("Enter the number\n");
  scanf("%f",&n);
  return n;
}
float square_root(float n)
{
  float x=n;
  float y=1;
  float e=0.000001;
  while(x-y>e)
    {
      x=(x+y)/2;
      y=n/x;
    }
 return y;
}
void output(float n, float sqrroot)
{
  printf("The square root of %.1f is %.1f",n,sqrroot);
}


