#include <stdio.h>
#include <math.h>

float input();
float my_sqrt(float n);
void output(float n, float sqrt_result);

int main()
{
  float n, sqrt_result;
  n = input();
  sqrt_result = my_sqrt(n); 
  output(n, sqrt_result);
  return 0;
}
float input(){
  float n;
  printf("Enter the number to be square rooted: ");
  scanf("%f", &n);
  return n;
}
float my_sqrt(float n){
  float x = n/2;
  float xnext;
  while(fabs(x-xnext) > 0.000001)
  {
    x = xnext;
    xnext = (x + n/x)/2;
  }
  return xnext;
}
void output(float n, float sqrt_result)
{
  printf("Square root of %.0f is %f\n", n, sqrt_result);
}