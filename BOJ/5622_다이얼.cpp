#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
  char str[15];
  scanf("%s", str);
  int sum = 0;
  int length = strlen(str);
  for(int i = 0; i < length; i++){
    int tmp = str[i] - 'A';
    if(tmp < 18){
      sum = sum + 3 + (tmp/3);
    }
    else if(tmp == 18){
      sum = sum + 8;
    }
    else if(tmp < 25){
      tmp -= 1;
      sum = sum + 3 + (tmp/3);
    }
    else{
      sum = sum + 10;
    }
  }
  printf("%d", sum);


  return 0;
}
