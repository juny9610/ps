// 2021년 SCPC 1차 예선 1번
/*
You should use the standard input/output

in order to receive a score properly.

Do not use file input and output

Please be very careful. 
*/

#include <iostream>

using namespace std;

int Answer, N;
int arr[100060], res[100060];
bool check[100060];

int find(int x) {
    if(res[x] == x) return x;
    else return find(res[x]);
}

void uni(int x, int y) {
    x = find(x);
    y = find(y);
    
    if(x < y) res[y] = x;
    else res[x] = y;
}


int main(int argc, char** argv)
{
	int T, test_case;
	/*
	   The freopen function below opens input.txt file in read only mode, and afterward,
	   the program will read from input.txt file instead of standard(keyboard) input.
	   To test your program, you may save input data in input.txt file,
	   and use freopen function to read from the file when using cin function.
	   You may remove the comment symbols(//) in the below statement and use it.
	   Use #include<cstdio> or #include <stdio.h> to use the function in your program.
	   But before submission, you must remove the freopen function or rewrite comment symbols(//).
	 */	

	// freopen("input.txt", "r", stdin);

	cin >> T;
	for(test_case = 0; test_case  < T; test_case++)
	{

		Answer = 0;
		/////////////////////////////////////////////////////////////////////////////////////////////
		/*
		   Implement your algorithm here.
		   The answer to the case will be stored in variable Answer.
		 */
		cin >> N;
		 
		for(int i = 0; i < N; i++) {
            cin >> arr[i]; 
            res[i] = i;
            check[i] = false;
        }

        for(int i = 0; i < N; i++) if(i+arr[i] < N) uni(i, i+arr[i]);
 
        for(int i = 0; i < N; i++) {
            int f = find(res[i]);
            if(!check[f]) {
                check[f] = true;
                Answer++;
            }
        }
		/////////////////////////////////////////////////////////////////////////////////////////////
		
		// Print the answer to standard output(screen).
		cout << "Case #" << test_case+1 << endl;
		cout << Answer << endl;
	}

	return 0;//Your program should return 0 on normal termination.
}