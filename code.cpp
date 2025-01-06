#include<iostream>
using namespace std;

int main(){
//int 4 bytes   1 bytes = 8 bits
//char 1 byte
//float  4 bytes
//bool 1 byte either true or false
//double 8 bytes
// all above data types are primitive datatypes;
cout<<"Hello Lokesh"<<endl;
int age  = 22;
char grade = 'A';
float PI = 3.14f;
bool isSafe = false;
double price = 100.99;
cout << age << endl;
cout << grade << endl;
cout << sizeof(age) <<endl;
cout << isSafe <<endl; // true -> 1 & false -> 0
cout << price << endl;
cout << PI << endl;

return 0; 
}
// ASCII A=65 a=97
// float declare mei krte hai tb value k baad 'f' likte hai
// kyuki iske bina compilar ko lgta hai ki hum double likhna chah rhe hai
