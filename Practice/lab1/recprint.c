#include <stdio.h>
int len(int n){
  int ans=0;
  while(n>0){
    n=n/10;
    ans+=1;
  }
  return ans;
}
void printnum(int number);
void int2str(char *str, int n) {
    int l = len(n);
    str[l] = '\0';  // Add null terminator at the end
    while (n > 0) {
        int dig = n % 10;
        n = n / 10;
        str[l - 1] = '0' + dig;  // Fill from the end
        l -= 1;
    }
}
int main(void)
{
  int n = 1234;

  // printnum(n);
  char str[4];
  int2str(str,n);
  printf("%s",str);
  return 0;
}

void printnum(int n)
{
  if (n / 10)
    printf("%d",n / 10);  
}
