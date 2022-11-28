/*
Problem
Alice has scored XX marks in her test and Bob has scored YY marks in the same test. Alice is happy if she scored at least twice the marks of Bob’s score. Determine whether she is happy or not.

Input Format
The first and only line of input contains two space-separated integers X, YX,Y — the marks of Alice and Bob respectively.
Output Format
For each testcase, print Yes if Alice is happy and No if she is not, according to the problem statement.

The judge is case insensitive so you may output the answer in any case. In particular YES, yes, yEsare all considered equivalent toYes`.

*/

#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t,a;
	cin >> t >> a;

        if(2*a>=t){
            cout << "YES" << endl;
        }else{
        cout << "NO" << endl;
        }

	return 0;
}

