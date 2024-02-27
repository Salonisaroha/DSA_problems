#include<iostream>
using namespace std;
#define PI  3.14 // Program of macro

int add(int c, int d){ // call by value
   int sum = c +d;
   return sum;
}
// Inline function where function call is replaced by body of function.
inline int getMax(int& a, int& b){ // call by refernce
    return (a>b) ? a:b;
}
int main(){
    int r = 7;
    double area = PI *r*r;
    cout<<area<<endl;
    int a = 10, b=20;
    int res = add(a,b);
    cout<<res<<endl;

    int x = 1, y = 2;
    int ans = 0;
    ans = getMax(x,y);
    cout<<ans<<endl;
    x = x +3;
    y = y + 1;
    ans = getMax(x,y);
    cout<<ans<<endl;
    return 0;

}