//if-else 
//if means "agar"
//if(condition true ) -> { block of code }
//else(condition false) -> {block of code}
//Question 1  Given number is positive or negative
//Method 1 
/*#include<iostream>
using namespace std;
int main(){
    int n ;
    cout << "Enter the number : "<<endl;
    cin >> n;
    if(n >= 0){
        cout <<"The number is positive."<<endl;
    } else {
        cout <<"The number is Negative."<<endl;
    }
    return 0;
}*/
//Method 2
#include<iostream>
using namespace std;
int main(){
    int n = 5;
    if(n>=0){
        cout<<"n is positive\n";
    } else {
        cout <<"n is negative\n";
    }
    return 0;
}