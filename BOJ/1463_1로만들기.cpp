#include <stdio.h>
#define min(a,b) (((a) < (b)) ? (a) : (b))

int main(){
  int n;
  scanf("%d", &n);
  int dp[1000001] = {0,};
  for(int i = 2; i <= n; i++){
    dp[i] = dp[i-1] + 1;
    if(i%2 == 0) dp[i] = min(dp[i], dp[i/2] + 1);
    if(i%3 == 0) dp[i] = min(dp[i], dp[i/3] + 1);
  }
  printf("%d\n", dp[n]);

  return 0;
}
