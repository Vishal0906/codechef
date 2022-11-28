/*

Problem
It is the World Cup Finals. Chef only finds a match interesting if the skill difference of the competing teams is less than or equal to DD.

Given that the skills of the teams competing in the final are XX and YY respectively, determine whether Chef will find the game interesting or not.

Input Format
The first line of input will contain a single integer TT, denoting the number of test cases. The description of TT test cases follows.
Each test case consists of a single line of input containing three space-separated integers XX, YY, and DD — the skill levels of the teams and the maximum skill difference.
Output Format
For each test case, output "YES" if Chef will find the game interesting, else output "NO" (without the quotes). The checker is case-insensitive, so "YeS" and "nO" etc. are also acceptable
*/

#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;cin>>t;
	while(t--){
	    int a,b,c;
	    cin>>a>>b>>c;
	    if(a>b){
	        if(a-b<=c){
	            cout<<"YES"<<endl;
	        }else{
	            cout<<"NO"<<endl;
	        }
	    }else{
	        if(b-a<=c){
	            cout<<"YES"<<endl;
	        }else{
	            cout<<"NO"<<endl;
	        }
	    }
	}
	return 0;
}
