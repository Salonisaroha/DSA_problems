#include<iostream>
using namespace std;
 int main (){
    string str = "Hello from apna college!";
    for(int i=0; i<str.length(); i++){
        cout<<str[i]<<" ";
    }
    cout<<endl;
    // string str1 = "Coding is superlative degree!";
    // for(char ch : str1){
    //     cout<<str1<<" ";
    // }

    // Member functions

    cout<<str.length()<<endl;
    cout<<str.at(3)<<endl;
    cout<<str.substr(1,10)<<endl;
    cout<<str.find("apna")<<endl; //index of first occurence
 }