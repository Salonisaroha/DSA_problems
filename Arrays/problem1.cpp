#include<iostream>
using namespace std;
int main(){
    //Question 1:- Find the total number of pairs in the Array whose sum is equal to the given value of x.

    int arr[] = {3,4,6,7,1};
    int target = 7;
    int n = sizeof(arr)/sizeof(arr[0]);
    int pairs = 0;
    for(int i = 0; i<n; i++){
        for(int j = i+1; j<n; j++){
            if(arr[i] + arr[j] == target){
                    pairs ++;
                    
            }
        }
    }
    cout<<pairs<<endl;

// Question 2:- Count the number of triplets whose sum is equal to the given value of x.

int array[] = {3,1,2,4,0,6};
int targetsum = 5;
int size = sizeof(array)/sizeof(array[0]);
int pairsum = 0;
for(int i = 0; i<size; i++){
    for(int j = i+1; j<size; j++){
        for(int k = j+1; j<size; j++){
            if(array[i] + array[j]+ array[k] == targetsum){
                pairsum++;
            }
        }
    }
}
cout<<pairsum;

//Question 3:- Find the unique number in a given array where all the elements are being repeated twice with one value being repeated.

int val[] = {2,3,1,3,2,4,1};
int cap = 7;
for(int i=0; i<cap; i++){
    for(int j = i+1; j<cap; j++){
        if(val[i] = val[j]){
            val[i] = val[j] = -1;
        }
    }
}

for(int i = 0; i<cap; i++){
    if(val[i]>0){
        cout<<val[i]<<endl;
    }
}

}