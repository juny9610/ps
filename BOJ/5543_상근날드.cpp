#include <stdio.h>

int main(){
  int hamburger[3];
  int drink[2];
  for(int i = 0; i < 3; i++) scanf("%d", &hamburger[i]);
  for(int i = 0; i < 2; i++) scanf("%d", &drink[i]);
  int min_burger = 3000, min_drink = 3000;
  for(int i = 0; i < 3; i++) if(hamburger[i] < min_burger) min_burger = hamburger[i];
  for(int i = 0; i < 2; i++) if(drink[i] < min_drink) min_drink = drink[i];
  printf("%d\n", min_burger+min_drink-50);

  return 0;
}
