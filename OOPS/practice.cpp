#include<iostream>
using namespace std;
class User{
int id;
string password;
public:
string username;
User(int id){
    this->id = id;
}
void setPswrd(string passwordVal){
    password = passwordVal;
}
string getpaswrd(){
    return password;
}

};
int main(){
User u1(123456789);
u1.setPswrd("youKnow already what it is");
cout<<u1.getpaswrd()<<endl;
}