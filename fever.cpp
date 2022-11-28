/*
Problem
Chef is not feeling well today. He measured his body temperature using a thermometer and it came out to be XX °F.

A person is said to have fever if his body temperature is strictly greater than 9898 °F.

Determine if Chef has fever or not.

Input Format
The first line contains a single integer TT — the number of test cases. Then the test cases follow.
The first and only line of each test case contains one integer XX - the body temperature of Chef in °F.
Output Format
For each test case, output YES if Chef has fever. Otherwise, output NO.

You may print each character of YES and NO in uppercase or lowercase (for example, yes, yEs, Yes will be considered identical).

*/
#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t,n;
	cin >> t;
	for(int i=1;i<=t;i++){
        cin>>n;
        if(n>=98){
            cout << "YES" << endl;
        }else{
        cout << "NO" << endl;
        }
	}
	return 0;
}

