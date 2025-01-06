//While loops
//while means "jb-tk" condition true hai
//tb-tk while k curly braces ki condition print hoti rahegi
//Qs. Print numbers 1 to 5
#include<iostream>
using namespace std;
int main(){
    int n = 50;
    int count = 1;//intialsation
    while(count <= n){//condition
        cout<<count<<" ";
        count++;//updation iska bina loop infinite loop mei chla jayega
    }
    cout<<endl;
    return 0;
}
//**Infinte loop */
//wo loop kbhi nhi hota
//jiski ending condition kbhi false nhi deti
// computer memory gets full , file bnd ho jaati ya VS code bnd ho jayega
//ye loop kbhi nhi likhni
//upper wale question mei infinte loop likhne ka matlb hoga ki condition toh check
//ho rhi hai lekin count ki value ko update hi nhi kiya yaani ki usko count++ ko comment out kr diya
//****agar infinte loop run ho jaata hai toh control+c se uska execution stop kr skte hai */


/* always take variable as meaningful words like age, marks,name instead of using a,b,c*/
/* declare variable in camelCase i.e int totalSum = 0; */
/* in loops variable i,j,k ki form mei le skte hai*/