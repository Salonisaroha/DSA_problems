#include <iostream>
#include <cstring>  // Include this header to use strlen

using namespace std;

int main() {
    char arr[5] = {'a', 'b', 'c', 'd', '\0'};
    cout << arr << endl;        // Print the array, which is null-terminated
    cout << strlen(arr) << endl; // Print the length of the string
    return 0;
}
