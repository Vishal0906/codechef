/*
Problem
Chef decided to redecorate his house, and now needs to decide between two different styles of interior design.

For the first style, tiling the floor will cost X_1X
1
​
  rupees and painting the walls will cost Y_1Y
1
​
  rupees.

For the second style, tiling the floor will cost X_2X
2
​
  rupees and painting the walls will cost Y_2Y
2
​
  rupees.

Chef will choose whichever style has the lower total cost. How much will Chef pay for his interior design?

Input Format
The first line of input will contain a single integer TT, denoting the number of test cases.
Each test case consists of a single line of input, containing 44 space-separated integers X_1, Y_1, X_2, Y_2X
1
​
 ,Y
1
​
 ,X
2
​
 ,Y
2
​
  as described in the statement.
Output Format
For each test case, output on a new line the amount Chef will pay for interior design.
*/


#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t,a,b,c,d;
	cin >> t;
	for(int i=1;i<=t;i++){
        cin >> a >> b >> c >> d;
        if((a+b)<=(c+d)) {
            cout << a+b << endl;
        }else {
        cout << c+d << endl;
        }
       }
	return 0;
}
