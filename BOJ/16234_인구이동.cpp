#include <iostream>
#include <queue>
#include <cmath>
#include <cstring>
using namespace std;

#define endl '\n'
#define MAX 51

int N, L, R;
int map[MAX][MAX];
bool visit[MAX][MAX];
bool isMoved = true;

int dx[] = {0,0,1,-1};
int dy[] = {1,-1,0,0};

bool check(int x, int y) {
    for(int i = 0; i < 4; i++) {
        int nx = x + dx[i];
        int ny = y + dy[i];
        if(nx >= 0 && ny >= 0 && nx < N && ny < N) {
            if(abs(map[x][y] - map[nx][ny]) >= L && abs(map[x][y] - map[nx][ny]) <= R)
                return true;
        }
    }
    return false;
}

void bfs(int x, int y) {
    queue< pair<int,int> > q, nq;
    q.push(make_pair(x,y));
    nq.push(make_pair(x,y));
    visit[x][y] = true;
    int sum = 0;
    int cnt = 0;

    while(!q.empty()) {
        x = q.front().first;
        y = q.front().second;
        q.pop();

        sum = sum + map[x][y];
        cnt = cnt + 1;

        for(int i = 0; i < 4; i++) {
            int nx = x + dx[i];
            int ny = y + dy[i];
            int div = abs(map[x][y] - map[nx][ny]);

            if(nx < 0 || ny < 0 || nx >= N || ny >= N) continue;
            if(visit[nx][ny]) continue;
            if(div < L || div > R) continue;
            
            visit[nx][ny] = true;
            q.push(make_pair(nx,ny));
            nq.push(make_pair(nx,ny));
        }
    }

    while(!nq.empty()) {
        x = nq.front().first;
        y = nq.front().second;
        nq.pop();
        map[x][y] = sum / cnt;
    }
}

int main() {
    ios_base :: sync_with_stdio(false); cin.tie(NULL);

    cin >> N >> L >> R;
    for(int i = 0; i < N; i++) for(int j = 0; j < N; j++) cin >> map[i][j];

    int res = 0;
    while(isMoved) {
        isMoved = false;
        for(int i = 0; i < N; i++) {
            for(int j = 0; j < N; j++) {
                if(!visit[i][j] && check(i,j)) {
                    bfs(i,j);
                    isMoved = true;
                }
            }
        }
        if(isMoved) res++;
        memset(visit, false, sizeof(visit));
    }

    cout << res << endl;

    return 0;
}