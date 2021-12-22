#include <stdio.h>
#include <string.h>

int main(){
  char str[106];
  scanf("%s", str);
  int length = strlen(str);
  int cnt = 0;
  for(int i = 0; i < length; i++){
    if(str[i] == 'c'){
      if(str[i+1] == '='){
        i++;
        cnt++;
        continue;
      }
      else if(str[i+1] == '-'){
        i++;
        cnt++;
        continue;
      }
      else{
        cnt++;
        continue;
      }
    }

    if(str[i] == 'd'){
      if(str[i+1] == 'z'){
        if(str[i+2] == '='){
          i += 2;
          cnt++;
          continue;
        }
      }
      else if(str[i+1] == '-'){
        i++;
        cnt++;
        continue;
      }
    }

    if(str[i] == 'l'){
      if(str[i+1] == 'j'){
        i++;
        cnt++;
        continue;
      }
    }

    if(str[i] == 'n'){
      if(str[i+1] == 'j'){
        i++;
        cnt++;
        continue;
      }
    }

    if(str[i] == 's'){
      if(str[i+1] == '='){
        i++;
        cnt++;
        continue;
      }
    }

    if(str[i] == 'z'){
      if(str[i+1] == '='){
        i++;
        cnt++;
        continue;
      }
    }

    cnt++;
  }
  printf("%d", cnt);

  return 0;
}
