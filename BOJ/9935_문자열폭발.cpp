#include <iostream>
#include <string>
using namespace std;

#define endl '\n'
#define MAX 1000001

string str, bomb, res = "";

int main() {
    ios_base :: sync_with_stdio(false); cin.tie(NULL);

    cin >> str >> bomb;

    int idx = 0;
    for(int i = 0; i < str.length(); i++) {
        res += str[i];

        if(res[res.length()-1] == bomb[bomb.length()-1]) {
            if(res.length() >= bomb.length()) {
                int cnt = 1;
                for(int j = bomb.length()-2; j >= 0; j--) {
                    if(res[res.length() - (bomb.length() - j)] == bomb[j]) cnt++;
                }

                if(bomb.length() == cnt) {
                    for(int j = 0; j < bomb.length(); j++) res.pop_back();
                }

            }
        }


    }    

    if(res.length() > 0) cout << res << endl;
    else cout << "FRULA" << endl;

    return 0;
}