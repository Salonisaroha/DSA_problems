#include<iostream>
#include<list>
#include<iterator>
using namespace std;

void printlist(list<int>ll){
    list<int>::iterator itr;
    for(itr=ll.begin(); itr!= ll.end(); itr++){
          cout<<(*itr)<<"->";
    }
    cout<<"NULL"<<endl;
}
int main(){
 list<int>ll;
 ll.push_back(10);
 ll.push_front(20);
 ll.push_front(30);
 ll.push_front(40);
 ll.push_front(50);
 printlist(ll);


}