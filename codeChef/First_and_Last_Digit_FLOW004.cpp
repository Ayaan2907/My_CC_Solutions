#include<bits/stdc++.h>
using namespace std;


int firstDigit(int f) { while (f>=10) { f/=10 ; } return f; } ; 
int lastDigit(int l) { return (l%=10) ; } ; 
// void  sum(int f1, int l1) { cout << firstDigit(f1) + lastDigit(l1) << endl ; } ;

int main(){
    int num, t, p;
    cin >> t;
    for (int i = 0; i < t; i++) {
        cin >> num;
        // sum(num, num);
        cout<<firstDigit(num)+lastDigit(num)<<endl;
        
    }
    return 0;
}




/*
https://www.codechef.com/problems/FLOW004

If Give an integer N . Write a program to obtain the sum of the first and last digits of this number.

Input
The first line contains an integer T, the total number of test cases. Then follow T lines, each line contains an integer N.

Output
For each test case, display the sum of first and last digits of N in a new line.

Constraints
1 ≤ T ≤ 1000
1 ≤ N ≤ 1000000

Example
Input
3 
1234
124894
242323

Output
5
5
5 
*/