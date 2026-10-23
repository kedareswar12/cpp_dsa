#include<iostream>
#include<climits>
using namespace std;


void MaxSubarraySum(int *arr , int n){
  int maxsum =0 ; 
  for(int start = 0 ; start < n ; start++){
      int CurrentSum = 0;
      for(int end = start ; end < n ; end ++){
        // for(int i = start ; i<= end ; i++){
          // cout<< arr[i]  << " ";
        CurrentSum += arr[end];
        cout << CurrentSum << ",";     
        maxsum = max(maxsum , CurrentSum);
      }
    cout << endl;
  }
  cout << "The maximum sum of the sub array is :" << maxsum << endl;

}
int main(){
  int arr[6] = {2 ,-3 , 6 ,  -5 , 4 ,2};
  int n = sizeof(arr) / sizeof(int );

  MaxSubarraySum(arr , n);
  return 0;
}