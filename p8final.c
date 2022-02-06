#include <stdio.h>

struct complex{
  float real, imaginary;
};
typedef struct complex Complex;

int get_n();
void input_n_complex(int n, Complex c[n]);
Complex add_n_complex(int n, Complex c[n]);
void output(int n, Complex c[n], Complex result);

int main(){
  int n;
  n = get_n();
  Complex c[n], result;
  input_n_complex(n, c);
  result = add_n_complex(n, c);
  output(n, c, result);

  return 0;
}
int get_n(){
  int n;
  printf("How many number of complex numbers? ");
  scanf("%d", &n);
  return n;
}
Complex input_complex(){
  Complex k;
  scanf("%f%f",&k.real, &k.imaginary);
  return k;
}
void input_n_complex(int n, Complex c[n]){
  for(int i=0; i<n; i++){
    printf("Complex no.%d: ", i+1);
    c[i] = input_complex();
  }
}
Complex add_n_complex(int n, Complex c[n]){
  Complex k;
  k.real = 0;
  k.imaginary = 0;
  for(int i=0;i<n;i++){
    k.real += c[i].real;
    k.imaginary += c[i].imaginary;
  }
  return k;
}
void output(int n, Complex c[n], Complex result){
   printf("  %.f + %.fi\n", c[0].real, c[0].imaginary);
  for(int i=1; i<n; i++){
    printf("+ %.f + %.fi\n", c[i].real, c[i].imaginary);
  }
  printf("= %.f + %.fi\n", result.real, result.imaginary);
}