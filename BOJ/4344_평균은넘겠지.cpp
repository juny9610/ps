#include <stdio.h>

int main(){
  int C;
  scanf("%d", &C);
  double N;
  double score[1000] = {0,};
  double aver = 0;
  double cnt = 0;
  double percent = 0;

  for(int i = 0; i < C; i++){
    cnt = 0;
    percent = 0;
    aver = 0;
    scanf("%lf", &N);
    for(int j = 0; j < N; j++){
      scanf("%lf", &score[j]);
      aver += score[j];
    }
    aver = aver / N;
    for(int j = 0; j < N; j++){
      if(score[j] > aver) cnt++;
    }
    percent = (cnt / N);
    percent *= 100;
    printf("%.3f%%\n", percent);
  }

  return 0;
}
