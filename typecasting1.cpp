// Type Casting 
// Converting data from one type to another
// two ways of typcasting 1. Type Conversion 2. TypenCasting
// Conversion -> done by compilar automatically itself not by programmer
//-> so known as implicit  ## from small datatye to large datatype
// ## like from float 4bytes -> double 8bytes or Char 1 byte -> int 4 bytes
#include<iostream>
using namespace std;
int main(){
    // type conversion
    char grade = 'A'; //65
    char grade1  = 'a'; //97
    int value = grade;
    int value1 = grade1;
    cout << value << endl;
    cout << value1 <<endl;

    // type casting
    double price = 100.99;
    int newPrice = (int)price;
    cout << newPrice << endl;

    // INPUT IN C++
    int age;
    cout<< "Enter the age: ";
    cin >> age;
// cin , cout are not function they are "global objects"
    cout << "Your age is : " <<age << endl;
    return 0;
}

// Type Casting -> done by programmer mannually 
//-> so known as explicit ## from big datatype to small datatype 
// it doesn't matter compiler is allowing to not
// ## like from double 8 bytes -> int 4 bytes