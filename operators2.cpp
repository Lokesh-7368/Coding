//Operators
//Relational operators < , <= , >= ,> , == , != "Not equal to"
// these operators either return true or false means return Boolean/bool value
// = this is assignment operators and == this is relational operators

//Logical operators -> also return boolean value 0/1 
// || ->Logical OR  ##pipe operators || -> uses when in two statement any one statement is true then final answer is true
// && -> Logical AND ## && ampersand symbol -> uses when in two statement  both statement must be true for final answer is true
//  ! -> Logical NOT ## agar answer true hai m usko false kr dunga and viceversa

#include<iostream>
using namespace std;

int main(){
     //Relational
    cout << (3<5)<<endl;// true so answer is 1
    cout << (3>5)<<endl; // false -> 0
    cout<<(3<=5)<<endl;// true -> 1
    cout<< (3!=5)<<endl; // true ->1
    cout <<(3==3)<<endl; // true ->1
    cout << (3 != 3)<<endl; // false ->0
    cout <<(3>=5)<<endl; // false ->0
    cout<<endl;
    cout<<endl;
    //Logical
    cout << !(3>1)<<endl; // false -> 0
    cout << (3>1)<<endl;// true ->1
    cout << (3<1) <<endl; // fasle ->0
    cout<< !(3<1) <<endl; // true -> 1
    
    cout << ((3<1)||(3<5))<<endl; // true->1
    cout << ((3<1)||(3<2))<<endl; // false->0
    cout << ((3>1)&&(3>2))<<endl; // true -> 1
    cout << ((3>1)&&(3>4))<<endl; // false ->0
        return 0;
}