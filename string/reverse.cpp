#include<iostream>
#include<cstring>
using namespace std;
void reverse(char word[], int s, int e){
while(s<=e){
    swap(word[s],word[e]);
    s++;
    e--;
}
}
int main(){
char word[] ="ApnaCollege";
reverse(word,0,strlen(word)-1);
cout<<word;

}