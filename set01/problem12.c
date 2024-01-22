#include<stdio.h>
struct _complex {
	float real,imaginary;
};
typedef struct _complex Complex;

int get_n();
Complex input_complex();
void input_n_complex(int n, Complex c[n]);
Complex add(Complex a, Complex b);
Complex add_n_complex(int n, Complex c[n]);
void output(int n, Complex c[n], Complex result);

int main()
{
    int n;
   n=get_n();
    Complex numbers[n],sum;
    input_n_complex(n,numbers);
    sum = add_n_complex(n,numbers);
    output(n,numbers,sum);
}
int get_n()
{
    int n;
    printf("Enter the number of arrays:\n");
    scanf("%d",&n);
    return n;
}
Complex input_complex()
{
Complex num;
printf("Enter the real and imaginary part:\n");
scanf("%f %f",&num.real,&num.imaginary);
return num;
}
void input_n_complex(int n, Complex c[n])
{
    printf("the details of %d complex numbers :\n",n);
    for(int i=0;i<n;i++)
    {
        printf("complex numbers %d:\n",i+1);
        c[i]=input_complex();
    }
}
Complex add(Complex a, Complex b)
{
    Complex sum;
    sum.real = a.real + b.real;
    sum.imaginary = a.imaginary + b.imaginary;
    return sum;
}
Complex add_n_complex(int n, Complex c[n])
{
    Complex result= {0,0};
    for(int i=0;i<n;i++)
    {
        result=add(result,c[i]);
    }
     return result;
}
void output(int n, Complex c[n], Complex result)
{
printf("The sum of complex numbers:");
for(int i=0;i<n;i++)
{
    printf("%.0f + %.0fi +",c[i].real, c[i].imaginary);
}
printf(":%.0f + %.0fi :", result.real, result.imaginary);
}