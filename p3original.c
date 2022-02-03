#include<stdio.h>

int input();
int sum_n(int n);
void output(int n, int sum);

int main()
{
  int n, sum;
  printf("How many numbers to be added? ");
  n = input();
  sum = sum_n(n);
  output(n, sum);
  return 0;
}
int input()
{
  int n;
  scanf("%d",&n);
  return n;
}
int sum_n(int n)
{
  int sum = 0;
  for(int i=1; i<=n; i++)
  {
    sum += i;
  }
  return sum;
}
void output(int n,int sum)
{
  for(int i=1; i<n; i++)
  {
    printf("%d + ", i);
  }
  printf("%d = %d\n",n, sum);
}