// 2021년 SCPC 1차 예선 2번 (미완)

#include <iostream>
#include <string>
#include <vector>

using namespace std;

int Answer, n, t;

int main() {
    int T, test_case;
    cin >> T;
    for(test_case = 0; test_case < T; test_case++) {
        Answer = 0;
        string B;

        cin >> n >> t;
        cin >> B;

        vector<char> A(n, '\0');

        for(int i = 0; i < n; i++) {
            if(i-t < 0 || i+t >= n) continue;
            if(B[i-t] == '1' && B[i+t] == '1') A[i] = '1';
        }
    
        for(int i = n-1; i >= 0; i--) {
            if(i-t < 0 && i+t >= n) continue;
            else if(i-t < 0 && i+t < n) {
                if(B[i] == '0') A[i+t] = '0';
                if(B[i] == '1'){
                    if(A[i+t] == '1') continue;
                    else if(A[i+t] == '0' || A[i+t] == '\0') A[i+t] = '1';
                }
            }
            else if(i-t >= 0 && i+t >= n) {
                if(B[i] == '0') A[i-t] = '0';
                if(B[i] == '1') {
                    if(A[i-t] == '1') continue;
                    else if(A[i-t] == '0' || A[i-t] == '\0') A[i-t] = '1';
                }
            }
            else {
                if(B[i] == '0') {
                    A[i-t] = '0';
                    A[i+t] = '0';
                }
                if(B[i] == '1') {
                    if(A[i+t] == '\0') A[i+t] = '1';
                    if(A[i+t] == '1' && A[i-t] == '\0') A[i-t] = '0';
                    if(A[i+t] == '0' && A[i-t] == '\0') A[i+t] = '1';  
                }
            }
        }

        cout << "Case #" << test_case+1 << endl;
        for(int i = 0; i < n; i++) cout << A[i];
        cout << endl;

    }

    return 0;
}