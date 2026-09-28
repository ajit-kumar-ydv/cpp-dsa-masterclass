#include<iostream>
#include<vector>
using namespace std;

void printArr(vector<int>& arr){
  for(int el:arr){
    cout << el << " ";
  }
  cout << endl;
}

void merge2SortedArr(vector<int>& v1, vector<int>& v2, vector<int>& ans){
  int i = 0, j = 0, k = 0;
  int m = v1.size(), n = v2.size();
  while(i<m && j<n){
    if(v1[i]<v2[j]){
      ans[k++] = v1[i++];
    }
    else{
      ans[k++] = v2[j++];
    }
  }
  while(i<m){
    ans[k++] = v1[i++];
  }
  while(j<n){
    ans[k++] = v2[j++];
  }
}

void mergeSortMagic(vector<int>& arr){ // magic sort
  int n = arr.size();
  if(n==1)
    return; // 1 Sized array already sorted
  vector<int> first(n / 2);
  vector<int> second(n-n / 2);
  for (int i = 0; i < n / 2;i++){ // first ko fill up
    first[i] = arr[i];
  }
  for (int i = 0; i < n - n / 2;i++){ // second ko fill up
    second[i] = arr[i+n/2];
  }
  mergeSortMagic(first); // 1st ko magic sort
  mergeSortMagic(second); // 2nd ko magic sort
  merge2SortedArr(first, second, arr); // merge 2 sorted array
}

int main(){
  vector<int> arr = {5, 2, 8, 3, 7, 1, 4, 6};
  printArr(arr);
  mergeSortMagic(arr);
  printArr(arr);
}
