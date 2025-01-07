/*Square Pattern
Easy with numbers n = 4 
1234     ****    ABCD
1234     ****    ABCD
1234     ****    ABCD
1234     ****    ABCD
in nested for loop
1)outer loop -> run n times mtlb jitni lines hogi (1 to n)->row
2)inner loop ->ek single row k andr jo print krwana hai uska logic inner loop mei hoga->column*/
#include<iostream>
using namespace std;
int main(){
    int n =4;
    for(int i = 1;i<=n;i++){//outer  //if loop start from i = 1 then n tk jayega and if i = 0 se start hoga toh n-1 tk jayega (int i = 0;i<=n-1;i++)
        for(int j =1;j<=n;j++){//inner // ye i = 0 hum array /strings mei loop use krenge(int j = 0;j<n;j++)
            cout<<j<<" ";
            //cout<<"* ";
        }
        cout<<endl;
    }
    return 0;
}
/*
#include<iostream>
using namespace std;
int main(){
    int n = 26;
    for(int i =0;i<n;i++){//outer loop
        char ch = 'A'; //in this block isliye likha kyuki hr line A se start ho rhi hai // A = 65
        for(int j =0;j<n;j++){//inner loop=>line start
            cout<<ch<<" ";
            ch = ch+1;//A = 65 in ch first then ch+1 makes it 66 which is B
        }
        cout<<endl;
    }
    return 0;
}*/