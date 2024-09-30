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

int main(){
int decNum = 50;
for(int i=0; i<=10; i++){
   cout<<decTobin(i)<<endl;
}

return 0;
}