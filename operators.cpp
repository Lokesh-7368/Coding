//Operators (especially Binary Operators -> Arithmatic, Relational, Logical)
//Arithmatic  +,- ,* astricks,/
// in division operator after point it only give integer not in decimal(not perfroming round off) 
// int/float -> result float; int/double -> result  double;
// float/int -> result float; double/int -> result double;
// int/int -> result int; :: also applicable in multiplication and other operations
#include<iostream>
using namespace std;
int main(){

    int a = 10, b = 5;
    // int b = 5;
    int sum;
    sum = a+b;
    cout << "sum = "<<(a+b)<<endl;
    cout << "difference = "<<(a-b)<<endl;
    cout<< "Product/Multiply = "<< (a*b)<<endl;
    cout<< "Divide/Quotient = "<<(a/b)<<endl;
    cout <<  "Modulo/Remainder = "<<(a%b)<<endl;
    cout<< sum << endl;
    //************* */
    int c =5;
    double d = 2;
    cout << (c/d) << endl;
    //******** */
    //int e = 5;
    //double f = 2;

    cout << (5/(double)2)<<endl; //by typecasting

    int ans = (5/(double)2); //because ans is 2 beacuse variable is of int data type 
    cout<< ans <<endl; 
    return 0;
}