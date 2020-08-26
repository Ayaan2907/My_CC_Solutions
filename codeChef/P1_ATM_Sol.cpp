#include <bits/stdc++.h>  

using namespace std;


int main() {
    
    int widraw_amount ;
    float initial_balance , remaining ;

    cin >> widraw_amount>> initial_balance ;
    
    if(widraw_amount % 5 == 0){
       
        if(initial_balance > widraw_amount && initial_balance > (widraw_amount + 0.50) ){
            remaining = initial_balance - widraw_amount - 0.50 ; 
            printf(" %.2f \n", remaining );
            //cout <<setprecision(2)  <<  remaining << endl;
        }else{
             printf(" %.2f \n", initial_balance);
            //cout<< setprecision(2)  << initial_balance <<endl;
            
        }
    }else{
    	printf(" %.2f \n", initial_balance);
        //cout << setprecision(2)  <<  initial_balance << endl;
    }
    return 0;
}

	   