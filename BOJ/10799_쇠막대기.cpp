#include <stdio.h>
#include <string>
#include <string.h>
#include <stack>
#include <iostream>

using namespace std;

int main(){

  stack <char> s;
  string str;
  char c, prev;
  int cnt = 0;

  cin >> str;
  s.push(str[0]);
  for(int i = 1; str[i] != '\0'; i++){
    c = str[i];
    prev = str[i-1];

    if(c == '('){
      s.push(str[i]);
      continue;
    }
    else{
      if(prev == '('){
        s.pop();
        cnt += s.size();
      }
      else{
        s.pop();
        cnt++;
      }
    }
  }

  printf("%d\n", cnt);

  return 0;
}
