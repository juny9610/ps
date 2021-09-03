#include <iostream>
#include <cmath>
using namespace std;

#define endl '\n'
typedef long long ll;

int T;

int main() {
    ios_base :: sync_with_stdio(false); cin.tie(NULL);

    cin >> T;
    for(int i = 0; i < T; i++) {
        ll x, y;
        cin >> x >> y;

        ll dis = (int)sqrt(y - x);

        if( (y-x) == (dis*dis) ) cout << 2*dis - 1 << endl;
        else if( (y-x) > (dis*dis) && (y-x) <= (dis*dis)+dis ) cout << 2*dis << endl;
        else if( (y-x) > (dis*dis)+dis && (y-x) < (dis+1)*(dis+1)) cout << 2*dis + 1 << endl;
    }

    return 0;
}