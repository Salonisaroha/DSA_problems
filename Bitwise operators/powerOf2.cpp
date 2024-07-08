#include<iostream>
using namespace std;

bool isPowerof2(int num){
    if((num&(num-1))== 0){
        return true;
    }
    else{
        return false;
    }
}
int main(){
cout<<isPowerof2(88)<<endl;
cout<<isPowerof2(8)<<endl;

}