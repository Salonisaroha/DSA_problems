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
void setPswrd(string password){
    this->password = password;
}
string getpaswrd(){
    return password;
}
};
int main(){
User u1(123456789);
u1.setPswrd("you already know what it is");
cout<<u1.getpaswrd()<<endl;
}