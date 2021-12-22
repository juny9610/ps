#include <stdio.h>
#include <string.h>
using namespace std;

int main(){
  int T;
  int R;
  char arr[20];
  scanf("%d", &T);
  for(int i = 0; i < T; i++){
    scanf("%d", &R);
    scanf("%s", arr);
    for(int j = 0; j < strlen(arr); j++){
      for(int k = 0; k < R; k++){
      printf("%c", arr[j]);
      }
    }
    printf("\n");
  }
  return 0;
}
