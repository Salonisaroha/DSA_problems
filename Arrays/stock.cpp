#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
class Solution{
public:
int maxProfit(vector<int> &prices){
    int maxProfit = 0; 
    int bestBuy = prices[0];
    for(int i=1; i<prices.size(); i++){
        if(prices[i]>bestBuy){
            maxProfit = max(maxProfit, prices[i]-bestBuy);
        }
        bestBuy = min(bestBuy, prices[i]);
    }
    return maxProfit;
}
};
int main(){
    vector<int>v = {7,1,3,5,8,9};
    Solution s;
    cout<<s.maxProfit(v);
}
