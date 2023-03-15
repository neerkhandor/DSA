#include <iostream>
using namespace std;

int binarySearch(int arr[],int n,int s,int e,int target){
    int mid=s+(e-s)/2;
    while(s<=e){
        if(arr[mid]==target){
            return mid;
        }
        else if(arr[mid]>target){
            e=mid-1;
        }
        else{
            s=mid+1;
        }
        mid=s+(e-s)/2;
    }
    return -1;
}
int main(){
int arr[]={10,20,40,50,60,70};
int n=sizeof(arr)/sizeof(arr[0]);
int s,e,target;
target=50;
int ans=binarySearch(arr,n,0,n-1,target);
cout<<ans<<endl;
}