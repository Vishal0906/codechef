/*
Chef has infinite coins in denominations of rupees 55 and rupees 1010.

Find the minimum number of coins Chef needs, to pay exactly XX rupees. If it is impossible to pay XX rupees in denominations of rupees 55 and 1010 only, print -1−1.

Input Format
First line will contain TT, number of test cases. Then the test cases follow.
Each test case contains of a single integer XX.
Output Format
For each test case, print a single integer - the minimum number of coins Chef needs, to pay exactly XX rupees. If it is impossible to pay XX rupees in denominations of rupees 55 and 1010 only, print -1−1.
*/

#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t,n,j,k,l;
	cin >> t;
	for(int i=1 ; i<=t ; i++){
        cin >> n;
        if(0!=n%5){
            cout << "-1" << endl;
        }else{
        j=n/10;
        k=n%10;
        l=k/5;
        j=j+l;
        cout << j << endl;
        }

	}
	return 0;
}
