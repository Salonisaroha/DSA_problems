#include<iostream>
using namespace std;

/*
1. single inheritance
2. Multilevel inheritance
3. Multiple inheritance
4. Hybrid and hierarchial inheritance
*/

// when properties and member functions of base class is passed on to the derived class.It is used to increase the code reusability.

class Animal{
public:
     string color;
     void eat(){
        cout<<"eats\n";
     }
     void breathe(){
        cout<<"breathing\n";
     }
};
class Fish : public Animal{  // when protected is used it only give access to class and to its derived class only.
public:
    int fins;
    void swim(){
        cout<<"swims\n";
    }
};
class Mammal : public Animal{
    public:

   string bloodType;
 Mammal(){
    bloodType = "warm";
 }
};
class Dog : public Mammal{
  public:
  void tailWag(){
    cout<<"A dog wags its tail\n";
  }
};

class Teacher{
    public:
        int salary;
        string subject;
};
class Student{
    public:
    int rollNo;
    float cgpa;
};
class TA : public Teacher, public Student{
public:
 string name;
};
int main(){
    Fish f1;
    f1.fins = 3;
    cout<<f1.fins<<endl;
    f1.swim();
    f1.eat();
    f1.breathe();
    f1.color = "brown\n";
    cout<<f1.color;

    Dog d1;
    d1.breathe();
    d1.eat();
    d1.tailWag();
   cout<< d1.bloodType<<endl;

   TA ta1;
   ta1.name = "Saloni Saroha";
   ta1.subject = "C++";
   ta1.cgpa = 9.12;

   cout<<ta1.name<<endl;
   cout<<ta1.rollNo<<endl;
   cout<<ta1.subject<<endl;
   cout<<ta1.cgpa<<endl;

}