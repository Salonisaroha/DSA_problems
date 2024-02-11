#include<iostream>
#include<vector>
using namespace std;


int secondlargest(int arr[], int n) {
    int largest = 0, secondLargest = -1;
 
    
    for (int i = 1; i < n; i++) {
        if (arr[i] > arr[largest])
            largest = i;
    }
 
    
    for (int i = 0; i < n; i++) {
        if (arr[i] != arr[largest]) {
           
            if (secondLargest == -1)
                secondLargest = i;
            else if (arr[i] > arr[secondLargest])
                secondLargest = i;
        }
    }
    return secondLargest;
}

void sortZeroesAndOnes(vector<int> &sort){
   int left_ptr = 0;
   int right_ptr = sort.size() -1;
   while(left_ptr<right_ptr){
    if(sort[left_ptr]==1 && sort[right_ptr]==0){
        sort[left_ptr++] = 0;
        sort[right_ptr--] = 1;
    }

    if(sort[left_ptr]==0){
        left_ptr++;
    }
    if(sort[right_ptr]==1){
        right_ptr--;
    }


   }
}

void positionOfOddandEven(vector<int> &vec){
    int start = 0;
    int end = vec.size()-1;
  while(start<end){
    if(vec[start]%2 ==1 && vec[end]%2==0){
        swap(vec[start], vec[end]);
        start++; end--;
    }
 if(vec[start]%2==0){
    start++;
  }
  if(vec[end]%2==1){
    end--;
  }
  }

 

}
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

// Question 4:- Find the second largest elements int the given array.

int arr1[] = { 12, 35, 1, 10, 34, 1 };
    int n1 = sizeof(arr1)/sizeof(arr1[0]);
    int second_Largest = secondlargest(arr1, n1);
    if (second_Largest == -1)
        cout << "Second largest didn't exit\n";
    else
        cout << "Second largest : " << arr1[second_Largest];

// question 5 :-Rotate the given array a by k steps, where k is non-negative.
int rotate[] ={1,2,3,4,5};
int rotatesize = 5;
int k = 2;
k = k%rotatesize;
int ansarray[5];
int j = 0;
for(int i = n-k; i<rotatesize; i++){
    
  ansarray[j++] = rotate[i]; 
}

for(int i = 0; i<=k; i++){
    ansarray[j++] = rotate[i];
}
for(int i=0; i<rotatesize; i++){
    cout<<ansarray[i];
}

// Question 6 :- Given q queries. check if the given number is present in the array or not.

int noOfelement;
cin>>noOfelement;
vector<int> v(n);
for(int i = 0; i<noOfelement; i++){
    cin>>v[i];
}

const int N = 1e5 + 10;
vector<int> freq(N,0);
for(int i=0; i<n;i++){
    freq[v[i]]++;
}
cout<<"enter queries :- ";
int q;
cin>>q;

while(q--){
    int querelement;
    cin>>querelement;
    cout<<freq[querelement]<<endl;
}

// Question 7:- sort an array consisting of 0s and 1s


int input;
cin>>input;
vector<int> sort;

for(int i=0; i<input; i++){
    int ele;
    cin>>ele;
    sort.push_back(ele);
}

sortZeroesAndOnes(sort);

for(int i = 0; i<input; i++){
    cout<<sort[i]<<" ";
}

// Question 8:- Given an array a move all the even integers aat the begining of the array followed by all the odd integers. The relative oredr of odd or even integers does not matter. Return any array that satisfies the condition.


int num;
cout<<"Enter number of elements:- ";
cin>>num;
vector<int> vec;
for(int i=0; i<num; i++){
    int ele;
    cin>>ele;
    vec.push_back(ele);
}

positionOfOddandEven(vec);

for(int i=0; i<num; i++){
    cout<<vec[i]<<" ";
}
cout<<endl;
}