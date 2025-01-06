//do while loop
/*do{
block

}while(condition)*/
//in do while loop if condition baad mei check hoti hai phle kaam hota hai
//isliye chahe condition glt hi kyu na ho do-while loop mei kaam ek baar jarur hoga
#include<iostream>
using namespace std;
int main(){
    /**in while phle condition phir kaam */
    //while(3>5){
          // cout<<"Hello"<<endl;
    //}
     
     /**in do-while phle kaam phir condition */
    do{
        cout<<"Hello"<<endl;
    } while(3>5);

    return 0;
}
/*
#include<iostream>
using namespace std;
int main(){
    int n = 10;
    int i =1;
    do{
        cout<< i << " ";
        i++;
    } while(i<=n);

    cout<<endl;
    return 0;
}*/