#include<iostream>
using namespace std;

bool isSorted(int arr[],int n){
//base case
if(n==0){
    return true;
}
//if(i==n-1){
//     return true;
// }
if(arr[0]>arr[1]){
    return false;
}
else {
  //  cout<<arr<<" ";
    isSorted(arr+1,n-1);