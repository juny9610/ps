#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;

int main(){

  char arr[80];
  int n;
  int cnt = 1;
  int sum = 0;
  scanf("%d", &n);

  for(int i = 0; i < n; i++){
    scanf("%s", arr);
    cnt = 1;
    sum = 0;
    for(int j = 0; j < strlen(arr); j++){
      if(arr[j] == 'O'){
        sum += cnt;
        cnt++;
      }
      if(arr[j] == 'X'){
        cnt = 1;
      }
    }
    printf("%d\n", sum);
  }

  return 0;
}
