#include <stdio.h>

int input_array_size();
void input_array(int n, int a[n]);
int sum_n_array(int n, int a[n]);
void output(int n, int a[n], int sum);

int main(){
  int n, sum;
  n = input_array_size();
  int a[n];
  input_array(n, a);
  sum = sum_n_array(n, a);
  output(n, a, sum);
  return 0;
}
int input_array_size(){
  int n;
  printf("How many numbers to be added? ");
  scanf("%d", &n);
  return n;
}
void input_array(int n, int a[n]){
  for(int i=0;i<n;i++){
    printf("Number %d = ",i+1);
    scanf("%d", &a[i]);
  }
}
int sum_n_array(int n, int a[n]){
  int sum = 0;
  for(int i=0;i<n;i++){
    sum += a[i];
  }
  return sum;
}
void output(int n, int a[n], int sum){
  for(int i=0;i<n-1;i++){
    printf("%d + ", a[i]);
  }
  printf("%d = %d\n", a[n-1], sum);
}