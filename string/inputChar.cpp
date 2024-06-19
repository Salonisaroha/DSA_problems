#include<iostream>
#include <cstring>
using namespace std;
//uppercase
void upper(char word[], int n){
    for(int i=0; i<n; i++){
        char ch = word[i];
        if(ch>='A' && ch<= 'Z'){
            continue;
        }
        else{
            word[i] = ch - 'a' + 'A';
        }
    }
}
//lower case
void lower(char word[], int n){
    for(int i=0; i<n; i++){
        char ch = word[i];
        if(ch>='a' && ch<='z'){
            continue;
        }
        else{
            word[i]= ch-'A' + 'a';
        }
    }
}
int main(){
   // char word[30];
   // cin>>word; // It takes input from user
   // cout<<word<<endl; // It prints only that word which is before whitespace. If we want to print whole sentence then we use getline function.
    // char sentence[50];
    // cin.getline(sentence,50);
    // cout<<"Your sentence is :- "<<sentence<<endl;
    // cout<<strlen(sentence);

    char word[] = "ApPle";
    upper(word, strlen(word));
    cout<<word<<endl;
    char lowerWord[] = "MANGO";
    lower(lowerWord, strlen(lowerWord));
    cout<<lowerWord<<endl;
}