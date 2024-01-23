#include<stdio.h>
int input_array_size();
void input_array(int n, int a[n]);
int sum_composite_numbers(int n, int a[n]);
void output(int sum);
int input_array_size()
{
    int n;
printf("Enter the size:");
scanf("%d",&n);
}
void input_array(int n, int a[n])
{
    int i,count;
for (i=0;i<n;i++){
    scanf("%d",a[i]);
}
for(i=0;i<n;i++){
    if (a[i]==2){
        continue;
    }
    else if (a[i]%2==0)
    {
        count++;
    }
}
}
int sum_composite_numbers(int n, int a[n])
{

}
void output(int sum)
{

}
int main()
{
    int i,n,a[n],count=0;
    input_array_size();

}