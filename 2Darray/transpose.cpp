#include<iostream>
using namespace std;

int main(){
    int row = 3, column = 4;
    int matrix[][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}
    };
    int transpose[4][3] = {{0}};  // Note the dimensions are swapped

    for(int i = 0; i < row; i++) {
        for(int j = 0; j < column; j++) {
            transpose[j][i] = matrix[i][j];
        }
    }

    for(int i = 0; i < column; i++) {  // Looping over the new row count
        for(int j = 0; j < row; j++) {  // Looping over the new column count
            cout << transpose[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
