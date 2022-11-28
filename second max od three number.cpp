/*
Problem
Problem Statement
Write a program that accepts sets of three numbers, and prints the second-maximum number among the three.

Input
First line contains the number of triples, N.
The next N lines which follow each have three space separated integers.
Output
For each of the N triples, output one new line which contains the second-maximum integer among the three.
*/

#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t,a,b,c;
	cin >> t;
	for(int i=1;i<=t;i++){
        cin >> a >> b >> c;
        if((a<b && a>c) || (a>b && a<c)){
        cout << a << endl;
       }else if((b<a && b >> c)|| (b>a && b < c)  ){
       cout << b << endl;
       }else if ((c<a && c>b)||(c>a && c<b)){
       cout << c << endl;
       }
       }
	return 0;
}
