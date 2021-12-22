#include <stdio.h>

int main(){
  int tc;
  scanf("%d", &tc);
  int dp[100001];
  dp[0] = 0; dp[1] = 1; dp[2] = 2; dp[3] = 4;
  int num;
  for(int i = 4; i <= 11; i++) dp[i] = dp[i-1]+dp[i-2]+dp[i-3];
  for(int i = 0; i < tc; i++){
    scanf("%d", &num);
    printf("%d\n", dp[num]);
  }

  return 0;
}
