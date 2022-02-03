#include <stdio.h>

int input();
int cmp(int a, int b, int c);
void output(int a, int b, int c, int largest);
int main()
{
  int a, b, c, largest;
  printf("Enter a num 1: ");
  a = input();
  printf("Enter a num 2: ");
  b = input();
  printf("Enter a num 3: ");
  c = input();
  largest = cmp(a, b, c);
  output(a, b, c, largest);
}
int input()
{
  int n;
  scanf("%d", &n);
  return n;
}
int cmp(int a, int b, int c)
{
  if(a>b && a>c)
    return a;
  else if(b>c)
    return b;
  else 
    return c;    
}
void output(int a, int b, int c, int largest)
{
  printf("%d is the largest out of %d, %d, %d\n", largest, a, b, c);
}