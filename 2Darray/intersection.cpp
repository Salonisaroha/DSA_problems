#include<iostream>
#include<cmath>

using namespace std;
void intersection(int arr1[], int n, int m, int arr2[]){
    for(int i=0; i<n; i++){
       int element = arr1[i];
        for(int j=0; j<m; j++){
            if(element==arr2[j]){
                cout<<element;
                    arr2[j] = INT32_MIN;
                    break;
            }
        }
    }
    
}
// best approach

void intersect(int arr1[], int n, int arr2[], int m ){
    int i = 0;
    int  j=0;
    
    while(i<n && j<m){
        if(arr1[i]==arr2[j]){
           cout<<arr1[i];
          i++, j++;
        }
        else if(arr1[i]<arr2[j]){
            i++;
        }
        else{
            j++;
        }
    }
}
int main(){
int arr1[] = {2,3,4,3};
int arr2[] = {1,3};
int n=4;
int m=2;
//intersection(arr1,n,m,arr2);
intersect(arr1,n,arr2,m);
}