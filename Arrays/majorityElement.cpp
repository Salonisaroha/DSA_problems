#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;
int majorityElement(vector<int> &nums){ // time complexity is O(nlogn)
    int n = nums.size();
    sort(nums.begin(), nums.end());
    int freq = 1, ans = nums[0];
    for(int i =1; i<n; i++){
        if(nums[i]==nums[i-1]){
            freq++;
        }
        else{
            freq = 1;
            ans = nums[i];
        }
        if(freq>n/2){
            return ans;
        }
    }
    return ans;
}

// moore's voting algorithm

int majority(vector<int>& nums){
 int freq = 0, ans = 0;
 for(int i =0; i<nums.size(); i++){
    if(freq==0){
        ans = nums[i];
    }
    if(ans == nums[i]){
        freq++;
    } else{
        freq--;
    }
 }
 return ans;
}
int main(){
vector<int> v = {1,2,2,1,1};
cout<<majorityElement(v)<<endl;
cout<<majority(v)<<endl;
}