#include<iostream>
#include<vector>
using namespace std;

int singleNumber(vector<int>& nums){
    int ans = 0;
    for(int val : nums ){
        ans = ans^ val;
    }
    return ans;
}

int main(){
vector<int>vec = {4,1,2,1,2};

vector<int>v = {2,3,4,5,4,5, 3};
cout<<singleNumber(vec)<<endl;
cout<<singleNumber(v)<<endl;
}