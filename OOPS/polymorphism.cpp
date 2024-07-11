#include<iostream>
using namespace std;
class Polymorphism{
public:
   void show(int x){
    cout<<x<<endl;
   }
   void show(string str){
    cout<<str<<endl;
   }
};
class Complex{
   int real;
   int img;
public:
   Complex(int r, int i){
     real = r;
     img = i;
   }
   void showNum(){
  cout<<real<<" + "<<img<<"i\n";
   }
   // operator overloading
   void operator + (Complex &c2){
    int resReal = this->real + c2.real;
    int resImg = this->img + c2.img;
    Complex c3(resReal, resImg);
    cout<<"res : \n";
    c3.showNum();
   }
   void operator - (Complex &c1){
      int res1 = this->real - c1.real;
      int res2 = this->img - c1.img;
      Complex c4(res1, res2);
      cout<<"Result of subtraction through overloading is :- ";
      c4.showNum();
   }
};

class Parent{
public:
void show(){
   cout<<"Parent function shows...\n";
}
};
class Child:public Parent{
   public:
   void show(){
      cout<<"Child function shows...\n";
   }
};
int main(){
    // Polymorphism is the ability of the object to take on different forms or behave in different ways depending on the context in which they are used.
    /*
    There are two types of polymorphism
    1. Runtime polymorphism
    2. Compile time polymorphism
    */

   /* Compile time polymorphism
   There are two types of it
   1. Functional overloading
   2. Operator overloading
   */
  Polymorphism p1;
  p1.show(300);
  p1.show("Programming make facts!");
  Complex c1(1,2);
  c1.showNum();
  
  Complex c2(3,4);
  c2.showNum();
  c1 + c2;
  c2-c1;

  // function overriding
  // Parent and child both have the same function with different implementation.
  // The parent class function is to be overriden.

  Child b1;
  b1.show();

}