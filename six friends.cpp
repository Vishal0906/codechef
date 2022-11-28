/*
Problem
Six friends go on a trip and are looking for accommodation. After looking for hours, they find a hotel which offers two types of rooms — double rooms and triple rooms. A double room costs Rs. XX, while a triple room costs Rs. YY.

The friends can either get three double rooms or get two triple rooms. Find the minimum amount they will have to pay to accommodate all six of them.

Input Format
The first line contains a single integer TT - the number of test cases. Then the test cases follow.
The first and only line of each test case contains two integers XX and YY - the cost of a double room and the cost of a triple room.
Output Format
For each testcase, output the minimum amount required to accommodate all the six friends.
*/


#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t,a,b,c,d;
	cin >> t;
	for(int i=1 ;i<=t;i++){
        cin >> a >>b;
        if(a*3<=b*2){
            cout << a*3 << endl;
        }else{
        cout << b*2 << endl;}
	}
	return 0;
}
