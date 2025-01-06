//For loop
/*for(initialisation; condition; updation){
 work
}*/
#include<iostream>
using namespace std;

int main(){
    int n = 10;
       //initialisation ek hi baar hota hai 
       //or condition updation repeat hoti hai like
       // condition check krwana->kaam krwana->update krna->condition->kaam......  
//steps   (1)      (2)(4)    (3)
    for(int i = 1; i<=n;     i++){
        cout<<i<<" ";

    }
    cout<<endl;
    return 0;
}
/*
#include<iostream>
using namespace std;

int main(){
    int n = 10;
    for(int i = 1; i<=n; i = i+2){
        cout<<i<<" ";//1 3 5 7 9

    }
    cout<<endl;
    return 0;
}*/