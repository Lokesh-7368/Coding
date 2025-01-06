/*1 to root n; better approch to check prime number; lets do for 6 , and check factors of 6 which are like 1*6,2*3,3*2,6*1 ye sbhi 6 k factors hai 
//ab prime number lete hai ek jaise ki 7 , 7 k factor mei ya toh 1 aayega ya 7 aayega 1*7,7*1 ;jb hum kisi bhi number k factor ki baat krte hai toh ek point k baad
 factor repeat krte hai ;jaise 12 k factor dekhe 1*12,2*6,3*4,4*3,6*2,12*1 ab notice krenge ki 3*4 tk toh factore unique hai lekin uske baad ;factors repeat hone lge hai
//factors ki kahani isliye aayi kyuki last approach mei i jisse modulo le rhe the toh hum factor hi toh dekh rhe the kisse number pura divide  hoke modulo zero dega
//toh koi bhi number n , i jo uska factor hoga usi i se divide krke n modulo zero deta hai; ab factor repeat krte hai apn ne dekh liya kahan se repeat honge dekhte hai
// factor shuru hote hai 1*n se example 1*6 where n = 6 ;sbse bda factor hota hai root n * root n which is equal to n ;lets take example of 25 whose factor are 
1*25,5*5,25*1 here 25 ka  root hota hai 5 toh 5*5 k baad factor repeat hone lge ;1 to root n tk factor unique rhte hai ; if n = 12
1*12,2*6,3*4,4*3,6*2,12*1 toh 3*4 k baad factor repeat hone lge hai toh hum kh skte hai ki 12 ko non prime prove krne k liye mujhe usko na hi 6 se divide krne ki 
// jarurt hai na hi 4 se check krne ki jarurt hai , toh basically 12 k liye hume root 12 tk check krne ki jarurt hai toh hota hai 3.something , hume 4 tk check krne ki
//jarurt hi nhi hai kyuki waise bhi 4 repeated factors mei aata hai , 3.something se phle hi koi numbere exist krega jo usko completely divide kr dega or yahan pe wo 
// number 3 hi hota hai , 3 se 12 completly divide ho jayega toh 3 k baad waise bhi jarurt nhi hai check krne ki isliye hum apne previous approach k code k andr bahut
//hi important optimisation kr skte hai or wo optimation kya haiki mujhe ab apne loop ko 2 se leke (n-1 ) tk chalane ki jaruat nhi hai , mujhe apne loop ko 2 se 
leke root n tk chalane ki jarurt hai or root n tk kaise chlate hai ;jb tk i*i ki value less than n rhe (i*i<=n) .... ab ye kaise hoga agar (i^2 <= n) hoga toh iska 
mtlb hai i ki maximum value pahuchegi wo root n*root n ;tk hi pahuchne wali hai yaani ki i^2 at max n tk hi jayega  mean ki i ab max root n tk hi jayega 
 toh ab jo loop ki condition thi i<=n-1 usko change krke krna hai i*i<=n taaki repeated factor k saath check na krna pde*/ 
#include<iostream>
using namespace std;
int main(){
    int n = 11;
    bool isPrime = true;
    for(int i = 2; i*i<=n; i++){
        if(n%i==0){//non prime
            isPrime = false;
            break;
        }
    }
    //is loop k baad agar /isPrime->true->prime
    //isPrime->false->non prime
    if(isPrime == true){
        cout<<"Number is prime\n";
    } else {
        cout<<"Number is non-prime\n";
    }
    return 0;
}