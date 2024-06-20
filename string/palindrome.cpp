#include<iostream>
#include<cstring>
using namespace std;
bool palindrome(char word[],int n ){
    int s=0;
    int e=n-1;
    char newword[50];
    while(s<=e){
        if(word[s]!=word[e]){
            cout<<"not valid palindrome";
            return false;
        }
        s++;
        e--;
    }
    cout<<"valid palindrome";
    return true;
    

}
int main(){
 char word[50];
 cin.getline(word,50);
 palindrome(word, strlen(word));
}