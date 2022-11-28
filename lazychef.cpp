/*  Chef is a very lazy person. Whatever work is supposed to be finished in xx units of time, he finishes it in m * xm∗x units of time. But there is always a limit to laziness, so he delays the work by at max dd units of time. Given x, m, dx,m,d, find the maximum time taken by Chef to complete the work.

###Input:

First line will contain T, number of test cases. Then the test cases follow.
Each test case contains a single line of input, three integers x, m, d.
###Output: For each test case, output in a single line answer to the problem.

###Constraints

 10^41≤T≤10
 101≤x,m≤10
 1000≤d<100  */

#include<iostream>
using namespace std;

int main() {
	// your code goes here
	int t,x,m,d;
	cin >> t;
	for(int i =1; i<=t;i++){
        cin >> x >> m >> d;
        if(x*m<x+d){
            cout << x*m << endl;
        } else{
        cout << x+d << endl;
        }
	}
	return 0;
}

