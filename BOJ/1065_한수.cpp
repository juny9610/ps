#include <stdio.h>

int main(){
  int N;
  scanf("%d", &N);
  int arr[3] = {-1,-1,-1};
  int cnt = 0;

  for(int i = 1; i <= N; i++){
    if(i < 10) arr[0] = i%10;
    if(i < 100 && i > 9){
      arr[1] = i % 10;
      arr[0] = (i / 10) % 10;
    }
    if(i < 1000 && i > 99){
      arr[2] = i % 10;
      arr[1] = (i / 10) % 10;
      arr[0] = i / 100;
    }
    if(i == 1000){
      break;
    }
    if(arr[0] != -1 && arr[1] == -1){
      cnt++;
      continue;
    }
    if(arr[0] != -1 && arr[1] != -1 && arr[2] == -1){
      cnt++;
      continue;
    }
    if((arr[0] - arr[1]) == (arr[1] - arr[2])){
      cnt++;
      continue;
    }
  }
  printf("%d", cnt);

  return 0;
}
