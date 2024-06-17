#include<iostream>
using namespace std;

void triplet(int arr[], int n, int s) {
    bool found = false; // To check if at least one triplet is found
    for (int i = 0; i < n - 2; i++) {
        for (int j = i + 1; j < n - 1; j++) {
            for (int k = j + 1; k < n; k++) {
                if (arr[i] + arr[j] + arr[k] == s) {
                    cout << "(" << arr[i] << "," << arr[j] << "," << arr[k] << ")" << endl;
                    found = true;
                }
            }
        }
    }
    if (!found) {
        cout << "No triplet found with the given sum" << endl;
    }
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    triplet(arr, n, 12);
    return 0;
}
