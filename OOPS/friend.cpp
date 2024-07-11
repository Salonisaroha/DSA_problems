#include<iostream>
using namespace std;

class A{
    string secret = "Secret data";
    friend class B;
    friend void revealSecret(A &obj);
};
class B{  // B class becomes a friend of class A
    public:
    void showSecret(A &obj){
        cout<<obj.secret<<endl;
    }
};

void revealSecret(A &obj){
    cout<<obj.secret<<endl;
}

int main(){
    // A friend class or a friend function can access private and protected members of other classes in which it is declared as a friend.
A a1;
B b1;
b1.showSecret(a1);
}