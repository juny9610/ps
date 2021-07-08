#include <iostream>
#include <queue>
#include <stdio.h>

using namespace std;
#define MAX 1001

int N, M;
int arr[MAX][MAX];
int visit[MAX][MAX][2];
int step = 0;

int dx[4] = {1, -1, 0, 0};
int dy[4] = {0, 0, 1, -1};

int bfs(int x, int y) {
    queue< pair< pair<int,int>, int> > q;
    visit[x][y][0] = 1;
    int w = 0;
    q.push(make_pair(make_pair(x,y),w));
    
    while(!q.empty()) {
        x = q.front().first.first;
        y = q.front().first.second;
        w = q.front().second;
        q.pop();

        if(x == N-1 && y == M-1) return visit[x][y][w];

        for(int i = 0; i < 4; i++) {
            int nx = x + dx[i];
            int ny = y + dy[i];
            int nw = w;

            if(nx < 0 || nx >= N || ny < 0 || ny >= M) continue;
            if(visit[nx][ny][w]) continue;

            if(arr[nx][ny] == 0) {
                visit[nx][ny][nw] = visit[x][y][w] + 1;
                q.push(make_pair(make_pair(nx,ny),w));
            }

            if(arr[nx][ny] == 1 && nw == 0) {
                visit[nx][ny][1] = visit[x][y][w] + 1;
                nw = 1;
                q.push(make_pair(make_pair(nx,ny),nw));
            }
        }
    }
    return -1;

}

int main() {
    cin >> N >> M;
    for(int i = 0; i < N; i++) {
        string tmp;
        cin >> tmp;
        for(int j = 0; j < M; j++) {
            arr[i][j] = tmp[j] - '0';
        }
    }

    cout << bfs(0,0) << endl;

    return 0;
}