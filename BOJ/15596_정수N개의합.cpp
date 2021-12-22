#include <vector>
#include <stdio.h>
using namespace std;
long long sum(vector<int> &a) {
	long long ans = 0;
    int size = a.size();
    for(int i = 0; i < size; i++){
        ans += a[i];
    }

	return ans;
}
