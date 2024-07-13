#include<iostream>
using namespace std;
int factorial(int n){
    if(n==0){
        return 1;
    }
    return n*factorial(n-1);
}

void print(int n){
    if(n==0){
        return;
    }
    cout<<n<<" "<<endl;
    print(n-1);
    
}
int sum(int n){
    if(n==1){
        return 1;

    }
    return n+ sum(n-1);
}

int fibonacci(int n){
    if(n==0){
        return 0;
    }
    if(n==1){
        return 1;
    }
    return fibonacci(n-1) + fibonacci(n-2);
}
int main(){
int ans = factorial(5);
cout<<"answer is :-"<<ans<<endl;

print(50);

int res = sum(5);
cout<<"Sum is :-" <<res<<endl;

int num = fibonacci(4);
cout<<num<<endl;
}