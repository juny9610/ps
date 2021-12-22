#include <stdio.h>
#define max(a,b) (((a) > (b)) ? (a) : (b))

int main(){

  int n;
  int num[505][505] = {0,};
  int sum[505][505] = {0,};

  scanf("%d", &n);
  for(int i = 0; i < n; i++){
    for(int j = 0; j <= i; j++)
      scanf("%d", &num[i][j]);
  }

  for(int i = 0; i < n; i++){
    for(int j = 0; j <= i; j++){
      if(j == 0) sum[i][j] = sum[i-1][j] + num[i][j];
      else if(j == i) sum[i][j] = sum[i-1][j-1] + num[i][j];
      else sum[i][j] = max(sum[i-1][j-1], sum[i-1][j]) + num[i][j];
    }
  }

  int max = sum[n-1][0];
  for(int i = 1; i < n; i++){
    if(max < sum[n-1][i]) max = sum[n-1][i];
  }
  printf("%d\n", max);

  return 0;
}
