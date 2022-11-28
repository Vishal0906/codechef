/*
Problem
There were initially XX million people in a town, out of which YY million people left the town and ZZ million people immigrated to this town.

Determine the final population of town in millions.

Input Format
The first line of input will contain a single integer TT, denoting the number of test cases.
The first and only line of each test case consists of three integers XX, YY and ZZ.
Output Format
For each test case, output the final population of the town in millions.
*/

#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t,a,b,c;
	cin >> t;
	for(int i=1;i<=t;i++){
        cin >> a >> b >> c;
        cout << a-b+c << endl;
        }
	return 0;
}

