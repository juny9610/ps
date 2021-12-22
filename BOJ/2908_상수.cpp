#include <stdio.h>

int main(){
  int num1, num2;
  scanf("%d %d", &num1, &num2);

  int n_num1 = 0, n_num2 = 0;

  n_num1 += (num1 % 10) * 100;
  num1 /= 10;
  n_num1 += (num1 % 10) * 10;
  num1 /= 10;
  n_num1 += num1;

  n_num2 += (num2 % 10) * 100;
  num2 /= 10;
  n_num2 += (num2 % 10) * 10;
  num2 /= 10;
  n_num2 += num2;

  if(n_num1 > n_num2) printf("%d", n_num1);
  else printf("%d", n_num2);

  return 0;
}
