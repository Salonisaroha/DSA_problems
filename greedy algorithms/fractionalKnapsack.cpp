#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>
using namespace std;

bool compare(pair<double, int> p1, pair<double, int> p2) {
    return p1.first > p2.first;
}

int fractionalKnapsack(vector<int> val, vector<int> wt, int W) {
    int n = val.size();
    vector<pair<double, int>> ratio(n, make_pair(0.0, 0));
    
    // Populate the ratio vector
    for (int i = 0; i < n; i++) {
        ratio[i] = make_pair(val[i] / double(wt[i]), i);
    }
    
    // Sort the ratio vector in descending order
    sort(ratio.begin(), ratio.end(), compare);

    int ans = 0;
    for (int i = 0; i < n; i++) {
        int idx = ratio[i].second;
        if (wt[idx] <= W) {
            ans += val[idx];
            W -= wt[idx];
        } else {
            ans += ratio[i].first * W;
            W = 0;
            break;
        }
    }
    return ans;
}

int main() {
    vector<int> val = {60, 100, 120};
    vector<int> wt = {10, 20, 30};
    int W = 50;
    
    int maxProfit = fractionalKnapsack(val, wt, W);
    cout << "Maximum Profit: " << maxProfit << endl;

    return 0;
}
