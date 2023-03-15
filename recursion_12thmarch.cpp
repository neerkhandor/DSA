#include<iostream>
#include<vector>
#include<string>
using namespace std;

bool isSorted(int arr[],int n){
    //base case
    //if elements are less than equal to 1 then array is sorted
    if(n<=1){
        return true;
    }
    if(*arr>*(arr+1)){
        return false;
    }
    return isSorted(arr+1,n-1);
}
int binarySearch(int arr[],int n,int s,int e,int target){
    //base case
    //we are not traversing linearly our game is with start and end
  if(s>e){
    return -1;
  }
  int mid=s+(e-s)/2;
  if(arr[mid]==target){
    return mid;
  }
  if(arr[mid]>target){
    return binarySearch(arr,n,s,mid-1,target);
  }
  return binarySearch(arr,n,mid+1,e,target);
}
void subsequences(string s,string output,vector<string>& ans,int index){
    if(index>=s.length()){
        ans.push_back(output);
        return ;
    }
//exclude
subsequences(s,output,ans,index+1);
//include
output=output+s[index];
//output.push_back(s[index]);
subsequences(s,output,ans,index+1);

}
int main(){
//     int arr[]={2,1};
//     int n=sizeof(arr)/sizeof(arr[0]);
//     //int i=0;
//     bool ans=isSorted(arr,n);
//  if(ans){
//     cout<<"the given array is sorted"<<endl;
//  }
//  else{
//     cout<<"the given array is not sorted"<<endl;
//  }
//  int arr1[]={10,20,30,40,50,60,70,80,90,100};
//  int n1=10;
//  int s=0;
//  int end=n1-1;
//  int target=150;
//  int ans1=binarySearch(arr1,n1,s,end,target);
//  cout<<ans1<<endl;  .
string s="abcde";
string output="";
vector<string> ans;
int i=0;
subsequences(s,output,ans,i);
for(auto val:ans){
    cout<<val<<endl;
}
cout<<ans.size()<<endl;
}