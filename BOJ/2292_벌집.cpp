#include <stdio.h>

int main(){
  int num;
  scanf("%d", &num);
  int fix_room;

  for(int i = 1;; i++){
    int room = (3*i*i) - (3*i) + 1;
    if(room < num) continue;
    else{
      fix_room = i;
      break;
    }
  }
  printf("%d", fix_room);
}
