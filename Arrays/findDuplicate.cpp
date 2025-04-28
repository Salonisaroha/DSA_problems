#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

vector<int> findDuplicate(vector<int> &nums) {
    unordered_map<int, int> freq;
    for (int x : nums) {
        freq[x]++;
    }
    vector<int> result;
    for (auto &entry : freq) {
        if (entry.second > 1)
            result.push_back(entry.first);
    }
    return result;
}

int main() {
    vector<int> nums = {12, 11, 40, 12, 5, 6, 5, 12, 11};
    vector<int> result = findDuplicate(nums);
    for (int num : result) {
        cout << num << " ";
    }
    return 0;
}
