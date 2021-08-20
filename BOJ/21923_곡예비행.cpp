#include <iostream>
using namespace std;

#define endl '\n'

int N, M;
int map[1001][1001];
int up[1001][1001], down[1001][1001];
int res = -987654321;

int main() {
    ios_base :: sync_with_stdio(false); cin.tie(NULL);

    cin >> N >> M;
    for(int i = 1; i <= N; i++) {
        for(int j = 1; j <= M; j++) cin >> map[i][j];
    }

    for(int i = N; i >= 1; i--) {
        for(int j = 1; j <= M; j++) {
            if(i < N && j > 1) up[i][j] = max(up[i+1][j], up[i][j-1]) + map[i][j];
            else if(i < N) up[i][j] = up[i+1][j] + map[i][j];
            else if(j > 1) up[i][j] = up[i][j-1] + map[i][j];
            else up[i][j] = map[i][j];
        }
    }

    for(int i = N; i >= 1; i--) {
        for(int j = M; j >= 1; j--) {
            if(i < N && j < M) down[i][j] = max(down[i+1][j], down[i][j+1]) + map[i][j];
            else if(i < N) down[i][j] = down[i+1][j] + map[i][j];
            else if(j < M) down[i][j] = down[i][j+1] + map[i][j];
            else down[i][j] = map[i][j];
        }
    }

    for(int i = 1; i <= N; i++) {
        for(int j = 1; j <= M; j++) {
            res = max(res, up[i][j] + down[i][j]);
        }
    }

    cout << res << endl;

    return 0;
}