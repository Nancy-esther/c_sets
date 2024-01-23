#include<stdio.h>
void input(float *base, float *height);
void find_area(float base , float height, float *area);
void output(float base, float height, float area);
int main()
{
    float base,height,area;
    input(&base, &height);
    find_area(base ,height,&area);
    output(base, height, area);
    return 0;
}
void input(float *base, float *height)
{
    printf("Enter the base and height of a triangle:\n");
    scanf("%f %f",base,height);

}
void find_area(float base , float height, float *area)
{
     *area = (base*height)/2.0;
}
void output(float base, float height, float area)
{
       printf("Base is:%f\n",base);
       printf("height:%f",height);
       printf("The area of the Triangle is:%f",area);
    
}