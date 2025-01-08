//Square pattern
/*n = 3 
1 2 3         A B C
4 5 6         D E F
7 8 9         G H I
*/
#include<iostream>
using namespace std;
int main(){
    int n = 3;
    int num = 1;//agar hum chahte hai ki variable reset na ho toh usko hum outer loop se phle likhenge
    for(int i = 0;i<n;i++){
        for(int j = 0;j<n;j++){
            cout<<num<<" ";
            num++;
        }
        cout<<endl;

    }
    cout<<"after pattern : "<<num<<endl;//10
    return 0;
} 
/*
#include<iostream>
using namespace std;
int main(){
    int n = 3;
    char ch = 'A';
    for(int i = 0;i<n;i++){
        for(int j =0;j<n;j++){
            cout<<ch<<" ";
            ch++;
        }
        cout<<endl;
    }
    return 0;
}*/