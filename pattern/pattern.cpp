#include<iostream>
using namespace std;
int main(){
    // square
    int n;
    cin>>n;
    for(int i=0; i<n; i++){
        for(int j=0;j<n;j++){
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
    /*
    printing 1 2 3 4
             1 2 3 4
             1 2 3 4
             1 2 3 4
    */ 
int m;
cin>>m;
for(int i = 1; i<=m; i++){
    for(int j=1; j<=m; j++){
        cout<<j<<" ";
    }
    cout<<endl;
}
/*printing
1 2 3
4 5 6
7 8 9
*/
int x;
cin>>x;
int count = 1;
for(int i=1; i<x; i++){
    for(int j=1; j<x; j++){
      cout<<count<<" ";
      count++;
    }
    cout<<endl;
}
/*
printing
*
**
***
****
// */
   int star;
   cin>>star;
   for(int i=1; i<=star; i++){
        for(int j=1; j<=i; j++){
            cout<<"*";
        }
        cout<<endl;
   } 

   /*
printing
1
2 2
3 3 3
4 4 4 4
*/
    int num;
   cin>>num;
   for(int i=1; i<=num; i++){
        for(int j=1; j<=i; j++){
            cout<<i<<" ";
        }
        cout<<endl;
   } 

   /* printing
   1
   2 3
   4 5 6
   7 8 9 10
   */
  int val;
  cin>>val;
  int increment  = 1;
  for(int i=1; i<=val; i++){
    for(int j=1; j<=i; j++){
        cout<<increment<<" ";
        increment++;
    }
    cout<<endl;
  }
  /* printing
  1
  2 1
  3 2 1
  4 3 2 1
  */

 int z;
 cin>>z;
 for(int i=1; i<z; i++){
    for(int j = 1; j<=i ;j++){
        cout<<i-j+1<<" ";
    }
    cout<<endl;
 }
 /* printing
 A B C
 D E F
 G H H
 */
int y;
cin>>y;
char alpha = 'A';
for(int i=1; i<= y; i++){
    for(int j = 1; j<=y;j++){
        cout<<alpha<<" ";
        alpha++;
    }
    cout<<endl;
}
 /* printing
 A A A
 B B B
 C C C
 */

int n;
cin>>n;
for(int i=1; i<=n; i++){
    for(int j = 1; j<=n;j++){
        char ch = 'A' + i-1;
        cout<<ch<<" ";
    }
    cout<<endl;
}
/* printing
A B C D
A B C D
A B C D
A B C D
*/
int n;
cin>>n;
for(int i=1; i<=n; i++){
    for(int j = 1; j<=n;j++){
        char ch = 'A' + j-1;
        cout<<ch<<" ";
    }
    cout<<endl;
}
 /*Printing
    1
    2 1
    3 2 1
    4 3 2 1
    */
    int k; 
    cin>>k;
    int i = 1;
    while(i<=k){
        int j = 1; 
        while(j<=i){
            cout<<(i-j)+1<<" ";
            j++;
        }
        i++;
        cout<<endl;

    /*Printing
    A B C
    B C D
    C D E
    */
int m;
cin>>m;
for(int i= 1; i<=m; i++){
    for(int j = 1; j<=m; j++){
      char ch = 'A' + i + j -2;
      cout<<ch<<" ";
      
    }
    cout<<endl;
}
/*Printing
    A  
    B B 
    C C C
    D D D D*/
int x; 
cin>>x;
for(int i=1; i<=x; i++){
    for(int j=1; j<=i; j++){
        char ch = 'A' + i -1;
        cout<<ch<<" ";
    }
    cout<<endl;
}

/*Printing
    *
  * *
* *  *
*/
int n;
cin>>n;
int row = 1;
while(row<=n){
   int space = n-row;
   while(space){
      cout<<" ";
      space = space -1 ;
   }
   int col = 1;
   while(col<=row){
      cout<<1+row-1;
      col = col + 1;
   }
   cout<<endl;
   row = row + 1;
}
/*Printing
       1
    1  2 1
 1  2  3 2 1

*/
int n;
cin>>n;
int row = 1;
while(row<=n){
   int space = n - row;
   while(space){
         cout<<" ";
   space = space - 1;
   }
  
   int j= 1;
while(j<= row){
   cout<<j;
   j = j + 1;
}
int start= row - 1;
while(start){
   cout<<start;
   start = start - 1;

}
cout<<endl;
row = row + 1;
}


}