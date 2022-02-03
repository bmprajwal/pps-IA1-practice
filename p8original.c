#include <stdio.h>

struct complex{
  float real, imaginary;
};
typedef struct complex Complex;

int get_n();
Complex input_complex();
void input_n_complex(int n, Complex c[n]);
Complex add_n_complex(int n, Complex c[n]);
void output(int n, Complex c[n], Complex result);

int main()
{
  int n;
  Complex result;
  n = get_n();
  Complex c[n];
  printf("\nEnter the Complex numbers (a+bi) \n\n");
  input_n_complex(n,c);
  result = add_n_complex(n,c);
  output(n, c, result);

  return 0;
}
int get_n(){
  int n;
  printf("Enter the numbers of complex numbers: ");
  scanf("%d", &n);
  return n;
}
Complex input_complex(){
  Complex p;
  scanf("%f%f", &p.real, &p.imaginary);
  return p;
}
void input_n_complex(int n, Complex c[n]){
  for(int i=0;i<n;i++){
      printf("complex number %d: ", i+1);
      c[i]= input_complex();
  }
}
Complex add_n_complex(int n, Complex c[n]){
  Complex p;
  p.real=0;
  p.imaginary=0;
  for(int i=0;i<n;i++){
      p.real = p.real + c[i].real;
      p.imaginary = p.imaginary + c[i].imaginary;
  }
  return p;
}
void output(int n, Complex c[n], Complex result){
  printf("\n  %.0f+%.0fi\n", c[0].real, c[0].imaginary);
  for(int i=1;i<n;i++){
      printf("+ %.0f+%.0fi\n",c[i].real, c[i].imaginary );
  }
  printf("= %.0f+%.0fi\n", result.real, result.imaginary );
}