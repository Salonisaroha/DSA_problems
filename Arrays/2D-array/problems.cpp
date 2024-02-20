#include<iostream>
using namespace std;
 int main(){
int n,m;
cin>>n>>m;
int arr[n][m];
for(int i=0; i<n; i++){
    for(int j=0; j<m; j++){
        cin>>arr[i][j];
    }
}
for(int i=0; i<n; i++){
    for(int j=0; j<m; j++){
        cout<<arr[i][j]<<" ";
    }
    cout<<endl;
}

// Write a program to display multiplication of two matrices entered by the user

int r1,c1;
cin>>r1>>c1;
int A[r1][c1];
for(int i = 0; i<r1; i++){
    for(int j=0; j<c1; j++){
       cin>>A[i][j];
    }
}
int r2, c2;
cin>>r2>>c2;
int B[r2][c2];
for(int i=0; i<r2; i++){
    for(int j=0; j<c2; j++){
        cin>>B[i][j];
    }
}
if(c1!=r2){
    cout<<"Matrix multiplication is not valid";
}
int C[r1][c2];
for(int i=0; i<r1; i++){
    for(int j=0; j<c2; j++){
         int value = 0;
         for(int k=0; k<r2; k++){
           value += A[i][k]*B[k][j];
         }
         C[i][j] = value;
    }
}
for(int i = 0; i<r1; i++){
    for(int j = 0; j<c2; j++){
        cout<<C[i][j]<<" ";

    }
    cout<<endl;
}

// Question 2 :- Write a program to find the transpose of a matrix

int n,m;
cin>>n>>m;
int arr[n][m];
for(int i=0; i<n; i++){
    for(int j=0; j<m; j++){
        cin>>arr[i][j];
    }
}

int transpose[m][n];
for(int i=0; i<m; i++){
    for(int j=0; j<n; j++){
        transpose[i][j] = arr[j][i];
    }
}
for(int i=0; i<m; i++){
    for(int j =0; j<n; j++){
      cout<<transpose[i][j];
    }
    cout<<endl;
}
 }