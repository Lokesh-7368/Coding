//prime number
// check any number is divisible from 2 to n-1
// 1 se or n se check krne ki jarurt nhi hai
//n%i==0
//(n%i++=0) non prime
//by default hum assume krenge ki prime hai number
#include<iostream>
using namespace std;
int main(){
    int n = 103;
    bool isPrime = true;
    for(int i = 2; i<=n-1; i++){
        if(n%i==0){//non prime
            isPrime = false;
            break;
        }
    }
    //is loop k baad agar
    //isPrime->true->prime
    //isPrime->false->non prime

    if(isPrime == true){
        cout<<"Number is prime\n";
    } else {
        cout<<"Number is non-prime\n";
    }
    return 0;
}