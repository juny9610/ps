#include <iostream>
#include <vector>
using namespace std;

#define endl '\n'
#define MAX 100001

int N;
vector<int> V[MAX];

int main() {
    ios_base :: sync_with_stdio(false); cin.tie(NULL);

    cin >> N;
    for(int i = 0; i < N; i++) {
        int u, v;
        cin >> u >> v;
        V[u].push_back(v);
        V[v].push_back(u);
    }


    return 0;
}