#include<stdio.h>
int input(int *a, int *b, int *c);
void compare(int a, int b, int c, int *largest);
void output(int a, int b, int c, int largest);
int main()
{
  int a,b,c,largest;
  input(&a,&b,&c);
  compare(a,b,c,&largest);
  output(a,b,c,largest);
  return 0;
}
int input(int *a, int *b, int *c)
{
  printf("Enter:");
  scanf("%d",a);
  printf("Enter:");
  scanf("%d",b);
  printf("Enter:");
  scanf("%d",c);
}
void compare(int a, int b, int c, int *largest)
{
  if ((a>b)&&(a>c))
  {
    //printf("a is largest");
    *largest = a;
  }
  else if(b>c)
  {
    //printf("b is largest");
    *largest = b;
  }
  else
  {
    //printf("c is largest");
    *largest = c;
  }

}
  void output(int a, int b, int c, int largest)
  {
    printf("largest is %d",largest);
  }
  