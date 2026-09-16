#include<iostream>
#include<vector>
using namespace std;
void printArr(vector<int>& vect){
  for(int ele:vect)
    cout << ele << " ";
}
void merge(vector<int>& v1,vector<int>& v2,vector<int>& ans){
  int i = 0, j = 0, k = 0;
  int m = v1.size(), n = v2.size();

  while(i<m and j<n){
    if(v1[i]<v2[j])
      ans[k++] = v1[i++];
    else
      ans[k++] = v2[j++];
  }
  while(i<m)
    ans[k++] = v1[i++];
  while(j<n)
    ans[k++] = v2[j++];
}
int main(){
  vector<int> a = {2, 3, 6, 8};
  vector<int> b = {1, 4, 5, 7, 9, 10};
  int m = a.size(), n = b.size();
  vector<int> c(m + n);
  merge(a, b, c);
  printArr(c);
}