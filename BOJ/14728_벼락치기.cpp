// dp[i][j]: j 시간동안 1~i를 공부해서 얻을 수 있는 최대 점수
#include <iostream>
#include <algorithm>
using namespace std;

#define endl '\n'

int N, T;
int K[1004], S[1004];
int dp[104][10004];

int main() {
    ios_base :: sync_with_stdio(false); cin.tie(NULL);

    cin >> N >> T;
    for(int i = 1; i <= N; i++) cin >> K[i] >> S[i];

    for(int i = 1; i <= N; i++) {
        for(int j = 1; j <= T; j++) {
            dp[i][j] = dp[i-1][j];
            if(j-K[i] >= 0) dp[i][j] = max(dp[i][j], dp[i-1][j-K[i]]+S[i]);
        }
    }

    cout << dp[N][T] << endl;

    return 0;
}