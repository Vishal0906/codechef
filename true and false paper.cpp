/*
Problem
Alice wrote an exam containing NN true or false questions (i.e. questions whose answer is either true or false). Each question is worth 11 mark and there is no negative marking in the examination. Alice scored KK marks out of NN.

Bob wrote the same exam but he marked each and every question as the opposite of what Alice did, i.e, for whichever questions Alice marked true, Bob marked false and for whichever questions Alice marked false, Bob marked true.

Determine the score of Bob.

Input Format
The first line contains a single integer TT — the number of test cases. Then the test cases follow.
The first and only line of each test case contains two space-separated integers NN and KK — the total number of questions in the exam and the score of Alice.
Output Format
For each test case, output on a new line the score of Bob
*/


#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t,a,b;
	cin >> t;
	for(int i=1 ;i<=t;i++){
        cin >> a >> b;
        if(a<=b){
            cout << b-a << endl;
        }else{
        cout << a-b << endl;
        }
	}
	return 0;
}
