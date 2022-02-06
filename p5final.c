#include <stdio.h>
#include <math.h>

float input();
float my_sqrt(float n);
void output(float n, float sq_result);

int main(){
  float n, sq_result;
  n = input();
  sq_result = my_sqrt(n);
  output(n, sq_result);
  return 0;
}
float input(){
  float n;
  printf("Enter a number: ");
  scanf("%f", &n);
  return n;
}
float my_sqrt(float n){
  float s = n/2; 
  float snext;
  while(fabs(s-snext)> 0.000001){
    s = snext;
    snext = (s + n/s)/2;
  }
  return snext;
}
void output(float n, float sq_result){
  printf("Square root of %f is %f\n", n, sq_result);
}