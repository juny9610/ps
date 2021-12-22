#include <stdio.h>

int main(){
  int A, B, C;
  scanf("%d %d %d", &A, &B, &C);
  int num;
  if(B >= C){
    printf("-1");
    return 0;
  }
  num = A / (C - B);
  printf("%d", num+1);

  return 0;
}
