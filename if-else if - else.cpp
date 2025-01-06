//if-"else if"-else
// used of multiple condtions 
/*#include<iostream>
using namespace std;
int main(){
    int marks;
    cout<<"Enter Marks : ";
    cin>>marks;

    if(marks>=90){
        cout<<"A\n";
    } else if(marks >=80 && marks < 90){
        cout<<"B\n";
    } else {
        cout<<"C\n";
    }
    return 0;
}*/

//Question find character is lowercase or uppercase
//if(ch >= 65 && ch<= 90)
#include<iostream>
using namespace std;
int main(){
    char ch;
    cout<<"Enter the character : ";
    cin>>ch;
    if(ch>='a' && ch <= 'z'){
        cout<<"Character is Lowercase.";
    }else{
        cout<<"Character is Uppercase.";
    }
}