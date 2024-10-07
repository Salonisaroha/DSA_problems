#include<iostream>
#include<vector>
using namespace std;

int rotatedSearch(vector<int>&nums, int target){
int st = 0, end = nums.size()-1;
while(st<=end){
    int mid = st + (end-st)/2;
    if(nums[mid]==target){
        return mid;
    }
    if(nums[st]<=nums[mid]){
          if(nums[st]<=target<=nums[mid]){
                 end = mid-1;
          }
          else{
              st = mid+1;
          }
    }
    else{
        if(nums[mid]<=target<=nums[end]){
             st = mid+1;
        }
        else{
            end = mid-1;
        }
    }
}
return -1;
}
int main(){
vector<int> v = {5,6,1,2,3,4};
cout<<rotatedSearch(v,3)<<endl;
}
