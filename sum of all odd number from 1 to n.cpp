//using for loop
#include<iostream>
using namespace std;
int main(){
    int n =10;
    //print odd number i%2 != 0
    // even k liye i%2 == 0 
    int oddSum;
    oddSum =0;
    for(int i =1; i<=n ;i++){
        if( i%2 != 0){
            //cout << i << " ";
            oddSum += i;

        }
    }
    cout<<"Sum of Odd number : "<<oddSum<<endl;
    cout<<endl;
    return 0;
}

/*//using while loop
#include<iostream>
using namespace std;
int main(){
    int n =10;
    int oddSum = 0;
    int i =0;
    while(i<=n){
        if(i%2 != 0){
            oddSum += i;
        }
        i++;
    }
    cout<<"odd Sum : "<<oddSum<<endl;
    return 0;
}*/