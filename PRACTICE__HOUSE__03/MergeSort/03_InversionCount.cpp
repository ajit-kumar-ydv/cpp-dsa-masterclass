// INVERSION COUNT:-- 
//   i < j and arr[i]>arr[j]
// current ke aage kon hai jo iss element se chhota hai

#include<iostream>
#include<vector>

using namespace std;
int count;
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
    if(v1[i]>v2[j]){
      ans[k++] = v2[j++];
      //count += (m - i); // bada hai to count ko badha do --> m-i se 
                         // kyuki agge ke sare to bhi bade hi honge 
    }
    else{
      ans[k++] = v1[i++];
    }
  }
  while(i<m){
    ans[k++] = v1[i++];
  }
  while(j<n){
    ans[k++] = v2[j++];
  }
}

int inversions(vector<int>& a, vector<int>& b){
  int i = 0, j = 0, cnt = 0;
  int m = a.size(), n = b.size();
  while(i<m && j<n){
    if(a[i]>b[j]){
      cnt += (m - i);
      j++;
    }else
      i++;
  }
  return cnt;
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
  count += inversions(first, second); // inversion kuchh mila
  merge2SortedArr(first, second, arr); // merge 2 sorted array
}

int main(){
  vector<int> arr = {2,4,1,3,5}; // output: 3
  count = 0;
  mergeSortMagic(arr);
  cout << count; // 3 ---> code is 100% correct
}
