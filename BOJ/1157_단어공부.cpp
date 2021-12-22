#include <stdio.h>

// a는 97 A는 65

int main(){
  char str[1000001];
  scanf("%s", str);

  int alpha[26] = {0,};

  for(int i = 0; str[i] != '\0'; i++){
    if(str[i] < 97)
      str[i] += 32;
    alpha[str[i] - 'a']++;
  }
  int max = 0;
  int max_num = 0;

  for(int i = 0; i < 26; i++){
    if(alpha[i] > max){
      max = alpha[i];
      max_num = i;
    }
    else if(alpha[i] == max){
      max_num = -1;
    }
  }
  if(max_num == -1)
    printf("?");

  else{
    printf("%c", 65+max_num);
  }

  printf("\n");

  return 0;
}
