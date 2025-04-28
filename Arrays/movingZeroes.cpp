#include<iostream>
#include<vector>

using namespace std;

void movingZeroes(vector<int>& nums){
    int n = nums.size();
    int a = 0;
    for(int i=0; i<n; i++){
        if(nums[i]!=0){
            nums[a]= nums[i];
            a++;
        }
    }
    for(int i=a; i<n; i++){
        nums[i]= 0;
    }
}

int main(){
    vector<int> arr = {1, 0, 2, 3, 2, 0, 0, 4, 5, 1};
    
    movingZeroes(arr);  

    
    for(int num : arr){
        cout << num << " ";
    }
    cout << endl;
}
