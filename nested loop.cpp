//Loop inside loop
#include<iostream>
using namespace std;
int main(){
    //for(int i = 1;i<=5;i++){//line
   //     cout<<"*****"<<endl;
    //}
/*
ye tarika hai ek line mei m star print krne ka
int m =10;
for(int i = 1;i<=m;i++){
    cout<<"*";
    //cout<<"*"<<endl;
}*/
//ab dekhte hai hr line mei m star print krwane hai
//loop ek baar run krta hai uske ek iteration kahte hai (kitne chakar lgaye)
//
//hr line mei jitne m chahiye wo hum print krwa skte hai jaise ki neeche kiya hai
int n = 5;
for(int i = 1;i<=n;i++){//line //agar number of line change krni hai toh n ko change kr do
    int m =10;
for(int j = 1;j<=m;j++){// or ek line mei kitni cheez print ho rhi hai toh m ko change kr do
    cout<<"*";
    //cout<<"*"<<endl;
}
cout<<endl;
}
//agar ye cout<<endl yahan hota toh **************.... aasa output aata na ki hume chahiye waise
/* **********
   **********
   **********
   **********
   **********
or hume aasa chahiye the */
    return 0;
}