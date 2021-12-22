#include <stdio.h>
#define MIN -2147483648

int main(){
  int n;
  int num[100001]={0, };
  int dp[100001]={0, };
  bool minus = true;
  scanf("%d", &n);

  for(int i = 0; i < n; i++) scanf("%d", &num[i]);

  dp[0] = num[0];

  for(int i = 0; i < n; i++){
    if(num[i] > 0){
      minus = false;
      break;
    }
  }

  for(int i = 1; i < n; i++){
    if(dp[i-1]+num[i] > 0) dp[i] = dp[i-1]+num[i];
    else dp[i] = 0;
  }
  int max;
  if(minus == false){
    max = dp[0];
    for(int i = 1; i < n; i++)
      if(max < dp[i]) max = dp[i];
  }
  if(minus == true){
    max = num[0];
    for(int i = 1; i < n; i++)
      if(max < num[i]) max = num[i];
  }
  printf("%d\n", max);

  return 0;
}
