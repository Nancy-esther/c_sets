#include<stdio.h>
#include<math.h>
int input();
int compare(int a, int b, int c);
void output(int a, int b, int c, int largest);
int main()
{
  int a,b,c,largest;
  a=input();
  b=input();
  c=input();
 largest= compare(a,b,c);
  output(a,b,c,largest);
  return 0;
}
int input()
{
  int n;
  printf("Enter:");
  scanf("%d",&n);
  return n;
}
int compare(int a,int b,int c)
{
   int largest;
  if((a>b)&&(a>c))
  {
     //printf("a is largest");
    largest=a;
  }
  else if(b>c)
  {
     // printf("b is largest");
     largest=b;
  }
  else
  {
    //printf("c is largest");
    largest=c;
  }
return largest;
}
void output(int a,int b,int c,int largest)
{
  printf("The largest of %d %d and %d is %d\n",a,b,c,largest);
}
