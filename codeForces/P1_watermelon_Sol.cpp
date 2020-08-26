#include<iostream>
using namespace std;

int main(){
    int w;
    cin >> w;
    // w >  2 for test case 5.
    if( w%2 == 0 && w > 2){
        cout<<"YES"<< endl;
    }else{
        cout<<"NO"<< endl;

    }
    return 0;
}