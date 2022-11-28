/*Problem
There are only 22 type of denominations in Chefland:

Coins worth 11 rupee each
Notes worth 1010 rupees each
Chef wants to pay his friend exactly XX rupees. What is the minimum number of coins Chef needs to pay exactly XX rupees?

Input Format
The first line of input will contain a single integer TT, denoting the number of test cases.
Each test case consists of a single line of input containing a single integer XX.
Output Format
For each test case, output on a new line the minimum number of coins Chef needs to pay exactly XX rupees.
*/

#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t,a,b,c;
	cin >> t;
	for(int i=1 ;i<=t;i++){
        cin >> a;
        b=a/10;
        c=a%10;

            cout << c<< endl;

	}
	return 0;
}
