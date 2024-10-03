#include<iostream>
#include<vector>
#include <climits>
using namespace std;
int maxSubArraySum(vector<int>& nums ){
int currSum = 0; 
int maxSum = INT_MIN;
for(int val : nums){
currSum += val;
maxSum = max(currSum, maxSum);
if(currSum<0){
    currSum = 0;
}
}
cout<<"Maximum subarray sum is :- "<<maxSum;
return maxSum;
}
int main(){
vector<int> v = {3,-4,5,4,-1,7,-8};
maxSubArraySum(v);
}