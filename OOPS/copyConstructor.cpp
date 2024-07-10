#include<iostream>
using namespace std;
class Car{
    public:
        string name;
        string color;
        Car(string name, string color){
            this->name = name;
            this->color = color;
        }
        Car(Car &original){
            cout<<"Copying original to new...\n";
            name = original.name;
            color = original.color;
        }


};
int main(){
Car c1("Mercedes benz", "white");
Car c2(c1);
cout<<c2.color<<endl;
cout<<c2.name<<endl;
}