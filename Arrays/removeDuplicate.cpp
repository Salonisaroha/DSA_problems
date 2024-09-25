#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if (nums.size() == 0) return 0;
        int j = 1;
        for(int i = 1; i < nums.size(); i++) {
            if(nums[i] != nums[i - 1]) {
                nums[j] = nums[i];
                j++;
            }
        }
        return j;
    }
void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        k = k % n;  // In case k is greater than the size of the array

        // Step 1: Reverse the whole array
        reverse(nums.begin(), nums.end());

        // Step 2: Reverse the first k elements
        reverse(nums.begin(), nums.begin() + k);

        // Step 3: Reverse the remaining elements
        reverse(nums.begin() + k, nums.end());
    }
};

void print(vector<int>v, int n){
    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }
}

int main() {
    Solution s;
    vector<int> num = {1, 1, 2, 3, 3};

    int newLength = s.removeDuplicates(num);
    cout << newLength << endl;

    // Only print up to the new length
    for(int i = 0; i < newLength; i++) {
        cout << num[i] << " ";
    }
    cout << endl;

    vector<int>vec ={1,2,3,4,5,6,7};
    int k = 3;
    s.rotate(vec, k);
    print(vec,vec.size());


    return 0;
}
