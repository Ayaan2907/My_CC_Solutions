// successfull solution

#include<bits/stdc++.h>
using namespace std;
void factorial(int n)
{
    int arr[200];
    arr[0]=1;
    int digits=1;
    int currNo,temp,x;
    for(int i=2;i<=n;i++){
        currNo=i;
        temp=0;
        x=0;
        int j=0;
        for(j=0;j<digits;j++){
            x = arr[j] * currNo + temp;
            arr[j] = x%10;
            temp = x/10;
        }
        while(temp>0){
            arr[j++] = temp%10;
            digits++;
            temp = temp/10;
        }
    }
    for(int i=digits-1;i>=0;i--){
        cout<<arr[i];
    }
    cout<<endl;
}

int main()
{
    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        factorial(n);
    }

    return 0;
}

//  question statement

/*
https://www.codechef.com/problems/FCTRL2

A tutorial for this problem is now available on our blog. Click here to read it.
You are asked to calculate factorials of some small positive integers.

Input
An integer t, 1<=t<=100, denoting the number of testcases, followed by t lines, each containing a single integer n, 1<=n<=100.

Output
For each integer n given at input, display a line with the value of n!

Example
Sample input:
4
1
2
5
3
Sample output:

1
2
120
6
*/


// failed solution 1
/*
#include <bits/stdc++.h>
using namespace std;
int main() {
    int ipNum, tests, fact = 1;
    cin >> tests ;
        vector<int> vect; 
    for(int i= 1; i <= tests; i++){
        cin >> ipNum;
        if(ipNum > 0) {
            for ( int j = 1; j <= ipNum;  j++) {
                // fact = fact * j; 
            }  
            vect.push_back(fact); 
            // cout << fact << endl;
            fact = 1;
            
        }else{
            cout << 1 << endl;
        }
        
    }
    cout << vect << endl;
     for (auto i = vect.begin(); i != vect.end(); ++i) 
        cout << *i << endl; 
    return 0;
}
*/


// failed solution 2
/*
#include<bits/stdc++.h>
using namespace std;

int factorial(int n){
    // if(n == 0){
        // return 0;
    // }else {
        return (n * factorial(n-1) ); 
    // }
}

int main(){
    int num, test, fact = 1;
    cin >> test;
    vector<int>numList;
    vector<int>factList ;
    for(int i = 0; i < test; i++){
        cin >> num ;
        numList.push_back(num);
        for(int j = 0; j < num ; j++){
            // fact = fact + (fact * i);
            factList.push_back(factorial(numList.at(i)));
            // fact = factorial(numList.at(i));
        }
         
    }
    //  for(int i = 0; i < numList.size() ; i++){
    //         // fact = fact + (fact * numList.at(i));
    //         // factorial(numList.at(i));
    //         factList.push_back(fact);
    //     // cout<< "factor"<< factList.at(i) << endl;
    //         // fact = 1;
    //     }

    for (auto i = numList.begin(); i != numList.end(); ++i){ 
        cout << ' ' << *i <<endl; 

    }
    for (auto i = factList.begin(); i != factList.end(); ++i){ 
        cout << ' ' << *i; 

    }
    for(int i = 0; i < factList.size(); i++){
        cout<< "factor"<< factList.at(i) << endl;
    }
    
    
    return 0;
}
*/