#include <iostream>
#include <vector>
using namespace std;

bool isValid(vector<int>& arr, int n, int m, int maxAllowedPages) {
    int stu = 1, pages = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] > maxAllowedPages) {
            return false;
        }
        if (pages + arr[i] <= maxAllowedPages) {
            pages += arr[i];
        } else {
            stu++;
            pages = arr[i];
        }
    }
    return stu > m ? false : true;
}

int allocateBook(vector<int>& arr, int n, int m) {
    if (m > n) {
        return -1;
    }
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }
    int st = 0, end = sum;
    int ans = -1;
    while (st <= end) {
        int mid = st + (end - st) / 2;
        if (isValid(arr, n, m, mid)) {
            ans = mid;
            end = mid - 1;
        } else {
            st = mid + 1; // Fixed from `st = mid - 1;`
        }
    }
    return ans;
}

int main() {
    vector<int> v = {2, 1, 3, 4}; // Array of books with pages
    int n = v.size();              // Number of books
    int m = 2;                     // Number of students

    int result = allocateBook(v, n, m);
    if (result == -1) {
        cout << "Not possible to allocate books" << endl;
    } else {
        cout << "Minimum maximum number of pages: " << result << endl;
    }

    return 0;
}