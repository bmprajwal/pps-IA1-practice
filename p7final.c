#include <stdio.h>

struct complex{
  float real, imaginary;
};
typedef struct complex Complex;

Complex input_complex();
Complex add(Complex a, Complex b);
void output(Complex a, Complex b, Complex c);

Complex input_complex();
int main(){
  Complex a, b, c;
  a = input_complex();
  b = input_complex();
  c = add(a,b);
  output(a, b, c);
  return 0;
}
Complex input_complex(){
  Complex k;
  printf("Enter the real and imaginary part(a + bi): ");
  scanf("%f%f", &k.real, &k.imaginary );
  return k;
}
Complex add(Complex a, Complex b){
  Complex k;
  k.real = a.real + b.real;
  k.imaginary = a.imaginary + b.imaginary;
  return k;
}
void output(Complex a, Complex b, Complex c){
  printf("%.f + %.fi + %.f + %.fi is %.f + %.fi\n", a.real, a.imaginary, b.real, b.imaginary, c.real, c.imaginary);
}