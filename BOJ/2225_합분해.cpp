// dp[a][b] = c : a개 더해서 그 합이 b가 되는 경우의 수는 c개 이다.

#include <iostream>
using namespace std;

#define endl '\n'
#define MAX 201

int N, K;
long long dp[MAX][MAX];

int main() {
    ios_base :: sync_with_stdio(false); cin.tie(NULL);

    cin >> N >> K;

    for(int i = 0; i <= N; i++) dp[1][i] = 1;

    for(int i = 2; i <= K; i++) {
        for(int j = 0; j <= N; j++) {
            for(int k = 0; k <= j; k++) {
                dp[i][j] = dp[i][j] + dp[i-1][k];
            }
            dp[i][j] = dp[i][j] % 1000000000;
        }
    }    

    cout << dp[K][N] << endl;


    return 0;
}