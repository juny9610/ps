#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

#define endl '\n'
#define MAX 101

int main() {
    ios_base :: sync_with_stdio(false); cin.tie(NULL);

    string str1, str2, str3;
    cin >> str1 >> str2 >> str3;
    int dp[MAX][MAX][MAX];

    for(int i = 0; i < str1.length(); i++) {
        for(int j = 0; j < str2.length(); j++) {
            for(int k = 0; k < str3.length(); k++) {
                if(str1[i] == str2[j] && str2[j] == str3[k]) 
                    dp[i+1][j+1][k+1] = dp[i][j][k] + 1;
                else 
                    dp[i+1][j+1][k+1] = max(dp[i][j+1][k+1], max(dp[i+1][j][k+1], dp[i+1][j+1][k]));
            }
        }
    }
    
    cout << dp[str1.length()][str2.length()][str3.length()] << endl;

    return 0;
}