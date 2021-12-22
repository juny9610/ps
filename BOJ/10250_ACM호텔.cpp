#include <stdio.h>

int main(){
  int Tc;
  int high, wide, num;
  scanf("%d", &Tc);

  for(int l = 0; l < Tc; l++){
    scanf("%d %d %d", &high, &wide, &num);
    int room = 0;
    if(num%high == 0){
      room += high*100;
      room += num/high;
    }
    else{
      room += (num%high)*100;
      room += (num/high)+1;
    }
    
    printf("%d\n", room);
  }

  return 0;
}
