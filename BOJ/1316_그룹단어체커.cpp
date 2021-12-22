#include <stdio.h>
#include <string>
#include <string.h>
#include <iostream>
using namespace std;

int main(){
  int n;
  cin >> n;
  string str;
  int cnt = 0;
  int no = 0;
  int alpha[26] = {0,};

  for(int i = 0; i < n; i++){
    cin >> str;
    int tmp = str.length();
    no = 0;
    for(int j = 0; j < 26; j++) alpha[j] = 0;

    for(int j = 0; j < tmp; j++){

      if(alpha[str[j] - 'a'] == 0){
        alpha[str[j] - 'a'] = 1;
        continue;
      }

      else if(alpha[str[j] - 'a'] != 0){
        if(str[j] == str[j-1]) continue;
        else{
          no = 1;
          break;
        }
      }

    }

    if(no == 1) continue;
    cnt++;
  }

  printf("%d", cnt);

  return 0;
}
