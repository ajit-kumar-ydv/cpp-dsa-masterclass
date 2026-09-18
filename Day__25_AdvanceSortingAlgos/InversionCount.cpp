#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int totalCount;
void printArr(vector<int>& vect){
  for(int ele:vect)
    cout << ele << " ";
}
void merge(vector<int>& v1,vector<int>& v2,vector<int>& ans){
  int i = 0, j = 0, k = 0;
  int m = v1.size(), n = v2.size();

  while(i<m and j<n){
    if(v1[i]>v2[j]){
      ans[k++] = v2[i++];
      totalCount += (m - i);
    }
    else
      ans[k++] = v1[j++];
  }
  while(i<m)
    ans[k++] = v1[i++];
  while(j<n)
    ans[k++] = v2[j++];
}

void mergeSort(vector<int>& arr){
  int n = arr.size();
  if(n==1)
    return; // 1 suzed array already sorted
  vector<int> a(n / 2);
  vector<int> b(n - n / 2);
  int idx = 0; // arr ke elements ke liye
  for (int i = 0; i < n / 2;i++){
    a[i] = arr[idx++];
  }
  for (int i = 0; i < n - n / 2;i++){
    b[i] = arr[idx++];
  }
  mergeSort(a);
  mergeSort(b);
  merge(a, b, arr);
  // detete na bhi krenge to bhi okay hai, delete krne se AS decrese krega....yes fine
  /*
  delete (&a);
  delete (&b);
  */
}
int inversionCount(vector<int> &arr){
  totalCount = 0;
  mergeSort(arr);
  return totalCount;
}

int main(){
   
  //vector<int> a = {2, 3, 6, 8};
  //vector<int> b = {1, 4, 5, 7, 9, 10};
  //int m = a.size(), n = b.size();
  //vector<int> c(m + n);
  
  vector<int> arr = {5, 2, 8, 3, 7, 1, 4, 5};
  cout << inversionCount(arr);
  /*
  mergeSort(arr);
  printArr(arr);
  */
}