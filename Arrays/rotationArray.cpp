#include<iostream>
#include<vector>
using namespace std;

void rightRotate(vector<int>& arr, int d) {
    int n = arr.size();
    for(int i = 0; i < d; i++) {
        int last = arr[n - 1];
        for(int j = n - 1; j > 0; j--) {
            arr[j] = arr[j - 1];
        }
        arr[0] = last;
    }
}

void leftRotate(vector<int>& arr, int d) {
    int n = arr.size();
    for(int i = 0; i < d; i++) {
        int first = arr[0];
        for(int j = 0; j < n-1; j++) {
            arr[j] = arr[j+1];
        }
        arr[n - 1] = first;
    }
}

void printArray(vector<int>& arr, int n) {
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl; // Move to the next line after printing array
}

int main() {
    vector<int> arr = {1, 2, 3, 4, 5, 6};

    // Perform right rotation
    rightRotate(arr, 2);
    printArray(arr, arr.size()); // Un-commented to print after right rotate

    // Perform left rotation

    vector<int>v = {1,2,3,4,5,6,7};
    leftRotate(v, 2);
    printArray(v, v.size());

    return 0;
}
