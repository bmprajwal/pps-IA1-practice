#include <stdio.h>

struct complex{
  float real, imaginary;
};
typedef struct complex Complex;

Complex input();
Complex add(Complex a, Complex b);
void output(Complex a, Complex b, Complex c);

int main(){
   Complex a,b,c;
   a = input();
   b = input();
   c = add(a,b);
   output(a,b,c);

    return 0;
}
Complex input()
{
    Complex a;
    printf("Enter the real and imaginary part: ");
    scanf("%f%f", &a.real, &a.imaginary);
    return a;
}
Complex add(Complex a, Complex b)
{
    Complex c;
    c.real = a.real + b.real;
    c.imaginary = a.imaginary + b.imaginary;
    return c;
}
void output(Complex a, Complex b, Complex c)
{
    printf("(%.0f + %.0fi) + (%.0f + %.0fi) is %.0f + %.0fi\n", a.real, a.imaginary, b.real, b.imaginary, c.real,c.imaginary);
}