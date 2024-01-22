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
int get_n() {
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    return n;
}
Complex input_complex() {
    Complex num;
    printf("Enter real part: ");
    scanf("%f", &num.real);
    printf("Enter imaginary part: ");
    scanf("%f", &num.imaginary);
    return num;
}
void input_n_complex(int n, Complex c[n]) {
    printf("Enter details for %d complex numbers:\n", n);
    for (int i = 0; i < n; i++) {
        printf("Complex number %d:\n", i + 1);
        c[i] = input_complex();
    }
}
Complex add(Complex a, Complex b) {
    Complex sum;
    sum.real = a.real + b.real;
    sum.imaginary = a.imaginary + b.imaginary;
    return sum;
}
Complex add_n_complex(int n, Complex c[n]) {
    Complex result = {0, 0};
    for (int i = 0; i < n; i++) {
        result = add(result, c[i]);
    }
    return result;
}
void output(int n, Complex c[n], Complex result) {
    printf("\nDetails of %d complex numbers:\n", n);
    for (int i = 0; i < n; i++) {
        printf("Complex number %d: %.2f + %.2fi\n", i + 1, c[i].real, c[i].imaginary);
    }
    printf("\nSum of %d complex numbers: %.2f + %.2fi\n", n, result.real, result.imaginary);
}

int main() {
    int n;
    n = get_n();

    Complex numbers[n], sum;

    input_n_complex(n, numbers);
    sum = add_n_complex(n, numbers);

    output(n, numbers, sum);

    return 0;
}