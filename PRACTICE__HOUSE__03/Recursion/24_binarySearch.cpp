#include<iostream>
#include<vector>
using namespace std;
int indexSearch(vector<int> &arr,int lo,int hi,int& target){
  int mid = (lo + hi) / 2;
  if(lo>hi)
    return -1;
  if(target>arr[mid])
    return indexSearch(arr, mid + 1, hi, target);
  else if(arr[mid]>target)
    return indexSearch(arr, lo, mid - 1, target);
  else
    return mid;
}
int main(){
  vector<int> nums = {-1, 0, 3, 5, 9, 12};
  int target = 9;
  int n = nums.size();
  int ans= indexSearch(nums, 0, n - 1, target);

  cout << ans;
}