#include<iostream>
#include<vector>
using namespace std;

void heapify(int i, vector<int>& arr, int n) {
    int left = (2 * i) + 1;
    int right = (2 * i) + 2;
    int maxI = i;
    
    if (left < n && arr[left] > arr[maxI]) {
        maxI = left;
    }
    if (right < n && arr[right] > arr[maxI]) {
        maxI = right;
    }
    if (maxI != i) {
        swap(arr[i], arr[maxI]);
        heapify(maxI, arr, n);  // Only call heapify if a swap occurs
    }
}

void heapSort(vector<int>& arr) {
    int n = arr.size();
    
    // Build the heap (rearrange array)
    for (int i = n / 2 - 1; i >= 0; i--) {
        heapify(i, arr, n);
    }

    // Extract elements from heap one by one
    for (int i = n - 1; i > 0; i--) {
        // Move current root to end
        swap(arr[0], arr[i]);
        
        // Call heapify on the reduced heap
        heapify(0, arr, i);
    }
}

int main() {
    vector<int> arr = {1, 4, 2, 5, 3};
    heapSort(arr);
    
    for (int i = 0; i < arr.size(); i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    
    return 0;
}
