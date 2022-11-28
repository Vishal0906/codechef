/*
Problem
In the current semester, you have taken XX RTP courses, YY Audit courses and ZZ Non-RTP courses.

The credit distribution for the courses are:

44 credits for clearing each RTP course.
22 credits for clearing each Audit course.
No credits for clearing a Non-RTP course.
Assuming that you cleared all your courses, report the number of credits you obtain this semester.

Input Format
The first line contains a single integer TT, the number of test cases. TT test cases follow. Each test case consists of one line, containing 33 integers separated by spaces.

The first integer is XX, the number of RTP courses.
The second integer is YY, the number of Audit courses.
The third integer is ZZ, the number of non-RTP courses.
Output Format
The output must consist of TT lines. The i^{th}i
th
  should consist of a single integer: the number of credits one gets for the i^{th}i
th
  test case.
*/

#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t,a,b,c;
	cin >> t;
	for(int i=1;i<=t;i++){
        cin >> a >> b >> c;

       cout << 4*a + 2*b + 0*c << endl;

       }
	return 0;
}
