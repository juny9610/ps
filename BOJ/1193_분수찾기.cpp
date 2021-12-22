#include <stdio.h>

int main(){
  int X;
  scanf("%d", &X);

  int sum = 0;
  int part;
  for(int i = 1;;i++){
    sum += i;
    if(sum >= X){
      part = i+1;
      break;
    }
    else continue;
  }
  int mom, son;
  if(part%2 == 1){
    mom = sum + 1 - X;
    son = part - mom;
  }
  else{
    son = sum + 1 - X;
    mom = part - son;
  }

  printf("%d/%d", son, mom);

  return 0;
}
