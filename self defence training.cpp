/*
Problem
After the phenomenal success of the 36th Chamber of Shaolin, San Te has decided to start 37th Chamber of Shaolin. The aim this time is to equip women with shaolin self-defence techniques.

The only condition for a woman to be eligible for the special training is that she must be between 1010 and 6060 years of age, inclusive of both 1010 and 6060.

Given the ages of NN women in his village, please help San Te find out how many of them are eligible for the special training.

Input Format
The first line of input contains a single integer TT, denoting the number of test cases. The description of TT test cases follows.
The first line of each test case contains a single integer NN, the number of women.
The second line of each test case contains NN space-separated integers A_1, A_2,..., A_NA
1
​
 ,A
2
​
 ,...,A
N
​
 , the ages of the women.
Output Format
For each test case, output in a single line the number of women eligible for self-defence training.
*/

#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t,n,l;
	cin >> t;
	for(int i = 1 ; i <= t ; i++){
	  cin >> n ;
	  int p=0;
	  for(int j = 1 ; j <= n ; j++){
	      cin >> l;
	      if(l<=60 && l >=10){
            p++;
	      }
	  }
	  cout << p << endl;
	}
	return 0;
}
