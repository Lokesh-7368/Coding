//Unary Operators 
//Increment++ like a++ first kaam then update or ++a first update then kaam
//a++ -> a = a+1 post increment operators
//++a pre increment operators

//decrement--
//post decrement  a-- -> a = a-1 phle kaam hota hai phir update
//pre decrement --a -> a = a-1 phle update hota hai phir kaam hota hai

//**** increment/decrement means update toh hoga hi hoga  */
#include<iostream>
using namespace std;

int main(){
    int a =10;
    int b = a++; // phle kaam mtlb b k andr a ki purani value aayegi,
    // baad mei update means a k ander 10 value thi wo plus 1 ho jaye yani ab a ki value 11 ho jayegi
    cout<<"b is = "<<b<<endl;//10
    cout<<"a is = "<<a<<endl;//11

    int c = 10;
    int d = ++c; //phle update hoga baad mei kaam hoga

    cout <<"d is =  "<< d<<endl;//11
    cout<<"c is = "<<c<<endl;//11

    int e = 10;
    int f = --e;//phle update hoga yani 9 hoga  kaam hoga yani e ki updated value f ko assign hogi toh f bhi 9 hoga
    cout <<"f is = "<<f<<endl;//9
    cout<<"e is = "<<e<<endl;//9

    int g = 10;
    int h = g--;//phle h k andr g ki value jayegi yani kaam hoga phir g update hoga 
    cout<<"h is = "<<h<<endl;//10
    cout<<"g is = "<<g<<endl;//9
    return 0;
}