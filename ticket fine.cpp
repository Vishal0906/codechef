/*
Problem
On a certain train, Chef-the ticket collector, collects a fine of Rs. XX if a passenger is travelling without a ticket. It is known that a passenger carries either a single ticket or no ticket.

PP passengers are travelling and they have a total of QQ tickets. Help Chef calculate the total fine collected.

Input Format
The first line contains a single integer TT, the number of test cases. TT lines follow. Each following line contains three integers separated by spaces, whose description follows.

The first integer, XX, is the fee in rupees.
The second integer, PP, is the number of passengers on the train.
The third integer, QQ, is the number of tickets Chef collected.
Output Format
The output must consist of TT lines.

The i^{th}i
th
  line must contain a single integer, the total money(in rupees) collected by Chef corresponding to the i^{th}i
th
  test case.
  */

  #include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t,a,b,c,d;
	cin >> t;
	for(int i=1;i<=t;i++){
        cin >> a >> b >> c ;
       d = b-c;
       cout << a*d << endl;
       }
	return 0;
}
