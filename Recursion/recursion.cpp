#include<iostream>
using namespace std;
int fact(int n){
    if(n==0){
        return 1;
    }
    
    int res = n * fact(n-1);
    return res;
}
void print(int n){
    if(n==0){
        return;
    }
    cout<<n<<endl;
    print(n-1);
}
int fibonacci(int n){
   
   if(n==0 || n==1){
    return n;
   }
   return fibonacci(n-1) + fibonacci(n-2);
}
int main(){
    int n;
    cin>>n;
    int ans = fact(n);
    cout<<ans<<endl;

    int m;
    cin>>m;
    print(n);

    int x;
    cin>>x;
    for(int i=0; i<n; i++){
        cout<<fibonacci(x);
    }
    return 0;
}