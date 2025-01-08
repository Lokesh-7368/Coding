//Triangle Pattern
// easy with stars  n =4
/*
*
* * 
* * *
* * * *
*/
#include<iostream>
using namespace std;
int main(){
    int n = 4;
    for(int i = 0;i<n;i++){//n  //lines 4 hai toh outer loop 0 to n-1 yaani 3 tk chalega
        for(int j = 0;j<i+1;j++){//i+1   //character in each line yani (i +1) stars ko print krwana hai mean 1 to i+1 or 0 to i
              cout<<"*"<<" ";
        }
        cout<<endl;
    }
    return 0;
}