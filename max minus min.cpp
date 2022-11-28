/*
Problem
Chef is given 33 integers A, B,A,B, and CC such that A \lt B \lt CA<B<C.
Chef needs to find the value of max(A, B, C) - min(A, B, C)max(A,B,C)−min(A,B,C).
Here max(A, B, C)max(A,B,C) denotes the maximum value among A, B, CA,B,C while min(A, B, C)min(A,B,C) denotes the minimum value among A, B, CA,B,C.

Input Format
The first line of input will contain a single integer TT, denoting the number of test cases.
Each test case consists of 33 integers A, B, CA,B,C.

Output Format
For each test case, output the value of max(A, B, C) - min(A, B, C)max(A,B,C)−min(A,B,C).
*/

#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t,a,b,c,maxi,mini;
	cin >> t;
	for(int i=1;i<=t;i++){
        cin >> a >> b >> c;
        if(a>b && a> c){
            maxi = a;
        }else if( b>c){
        maxi=b;
        }else {
        maxi = c;}

        if(a<b && a<c){
            mini = a;
        }else if( b<c){
        mini = b;}
        else{
            mini = c;
        }
        int l = maxi-mini;
        cout << l<< endl;
	}
	return 0;
}
