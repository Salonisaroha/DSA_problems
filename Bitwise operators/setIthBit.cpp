#include<iostream>
using namespace std;
int setIth(int num, int i){
    int bitMask = 1<<i;
    return (num, bitMask);
}
int main(){
cout<<setIth(7,3);
}