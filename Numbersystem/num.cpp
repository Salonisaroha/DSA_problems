#include<iostream>
using namespace std;

int decTobin(int decNum){
    int ans = 0;
    int pow = 1;
    while(decNum>0){
        int rem = decNum%2;
        decNum /= 2;
         ans += (rem*pow);
         pow *= 10;
    }
    return ans;
   

}
int binTodec(int binNum){
    int ans = 0;
    int pow = 1;
    while(binNum>0){
        int rem = binNum%10;
        ans += (rem*pow);
        binNum /= 10;
         
         pow *= 2;
    }
    return ans;
   

}

int main(){
int decNum = 50;
for(int i=0; i<=10; i++){
   cout<<decTobin(i)<<endl;
}
for(int i=0; i<=10; i++){
   cout<<binTodec(i)<<endl;
}

return 0;
}