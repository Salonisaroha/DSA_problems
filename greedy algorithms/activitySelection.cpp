#include<iostream>
#include<vector>
using namespace std;

int activitySelection(vector<int>start, vector<int>end){
  int count = 0;
  int currEnd = end[0];

  for(int i=0; i<start.size(); i++){
    if(start[i]>=currEnd){
        count++;
        currEnd =  end[i];
    }
  }
  return count;
}
int main(){
vector<int>start = {10,12,20};
vector<int>end = {20,25,30};

int result = activitySelection(start, end);
cout<<result;
}