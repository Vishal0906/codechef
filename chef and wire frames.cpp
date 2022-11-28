/*
Problem
Chef has a rectangular plate of length N cmNcm and width M cmMcm. He wants to make a wireframe around the plate. The wireframe costs XX rupees per cm.

Determine the cost Chef needs to incur to buy the wireframe.

Input Format
First line will contain TT, the number of test cases. Then the test cases follow.
Each test case consists of a single line of input, containing three space-separated integers N,M,N,M, and XX — the length of the plate, width of the plate, and the cost of frame per cm.
Output Format
For each test case, output in a single line, the price Chef needs to pay for the wireframe.
*/

#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t,a,b,c;
	cin >> t;
	for(int i=1 ;i<=t;i++){
        cin >> a >>b >> c;
            cout << (2*(a+b))*c<< endl;

	}
	return 0;
}

