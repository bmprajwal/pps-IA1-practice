#include <stdio.h>

void input_two_string(char a[], char b[]);
int str_cmp(char a[], char b[]);
void output(char a[], char b[], int result);

int main(){
  char a[80], b[80];
  int result;
  input_two_string(a, b);
  result = str_cmp(a,b);
  output(a, b, result);
  return 0;
}
void input_two_string(char a[], char b[]){
  printf("Enter string 1: ");
  scanf("%s", a);
  printf("Enter string 2: ");
  scanf("%s", b);
}
int str_cmp(char a[], char b[]){
  int i=0;
  while(a[i]==b[i]){
    if(a[i]=='\0' && b[i]== '\0')
     break;
    i++;
  }
  return a[i]-b[i];
}
void output(char a[], char b[], int result){
  if(result<0)
   printf("%s is greater than %s\n", b, a);
  else if(result>0)
   printf("%s is greater than %s\n", a, b);
  else 
   printf("%s is equal to %s\n", a, b); 
}