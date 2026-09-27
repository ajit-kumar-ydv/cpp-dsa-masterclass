#include<iostream>
#include<vector>
using namespace std;
void mergeSort(vector<int>& v1, vector<int>& v2, vector<int>& ans){
  int i = 0, j = 0, k = 0;
  int m = v1.size(), n = v2.size();
  while(i<m && j<n){
    if(v1[i]<v2[j]){
      ans[k] = v1[i];
      i++;
      k++;
    }
    else{
      ans[k] = v2[j];
      j++;
      k++;
    }
  }
  while(i<m){
    ans[k] = v1[i];
    i++;
    k++;
  }
  while(j<n){
    ans[k] = v2[j];
    j++;
    k++;
  }
}
int main(){
  vector<int> v1 = {2, 5, 7, 9};
  int m = v1.size();
  vector<int> v2 = {1, 3, 4, 6, 8, 10};
  int n = v2.size();
  vector<int> ans(m + n);

  mergeSort(v1, v2, ans);
  //print
  for(int el:ans){
    cout << el << " ";
  }
}
