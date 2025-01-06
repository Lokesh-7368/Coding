//using for loop
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter number: ";
    cin>>n;
    int sum = 0;
   for(int i = 1;i<=n;i++){
    //sum = sum +1;
    sum += i;
    //if(i==5){
    // break; agar ye likh diya toh mtlb break toh hum loop se bahar aa jayenge 
    // sum sir 5 tk hi print hoga jo ki 15 hoga na ki n tk ka sum 
    //}
   }
    cout<<"Sum form 1 to n is : "<<sum<<endl;
    return 0;
}
//break is a keyword
// keyword are reserved words which cannot used for variable declaration
//using while loop
/*#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter number: ";
    cin>>n;
    int sum = 0;
    int i =1;
    while(i<=n){
        sum+=i;
        i++;
    }
    cout<<"Sum form 1 to n is : "<<sum<<endl;
    return 0;
}*/