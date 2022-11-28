/*
Problem
Alice is playing Air Hockey with Bob. The first person to earn seven points wins the match. Currently, Alice's score is AA and Bob's score is BB.

Charlie is eagerly waiting for his turn. Help Charlie by calculating the minimum number of points that will be further scored in the match before it ends.

Input Format
The first line of input will contain an integer TT � the number of test cases. The description of TT test cases follows.
The first and only line of each test case contains two space-separated integers AA and BB, as described in the problem statement.
Output Format
For each test case, output on a new line the minimum number of points that will be further scored in the match before it ends.
*/

#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t,a,b;
	cin >> t;
	for(int i=1;i<=t;i++){
        cin >> a >> b;
        if(a>=b){
            cout << 7-a << endl;
        }else if(b>=a) {
        cout << 7-b << endl;
        }
       }
	return 0;
}

