#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void printDigits(int n){
    if(n==0){
        return;
    }
   
    int lastDigit=n%10;
    printDigits(n/10);
    cout<<lastDigit<<" ";
  
}
void printCounting(int n){
if(n==0){
  return;
 }
// 1 case mein solve karunga baaki recursion sambhal lega
  cout<<"before calling recursive function :" <<n<<" ";
  cout<<endl;
  printCounting(n/10);
 // cout<<"After calling recursive function :"<<n<<" ";
  n=n%10;
  //cout<<endl;
  //cout<<"After doing n%10 :"<<n<<" ";
  //cout<<endl;
  cout<<n<<" ";
}
void printCounting1(int n){
if(n==0){
  return;
 }
cout<<"before calling recursive function :" <<n<<" ";
  cout<<endl;
int lastDigit=n%10;//345=345%10=5
cout<<"After doing n%10 "<<" ";
cout<<lastDigit<<" ";
cout<<endl;
printCounting1(n/10);
cout<<"after calling recursive  function "<<n<<endl;
}
bool getKey(int arr[],int n ,int i,int key){
//base case
  if(i>=n){
    return false;
  }
  //processing
  if(arr[i]==key){
    return true;
  }
  //recursive call
  bool ans=getKey(arr,n,i+1,key);
  return ans;
}
void storeIndexes(int arr[],int n,int& i,int key, vector <int>& ans){
  if(i>=n){
    return;
  }
  if(arr[i]==key){
    ans.push_back(i);
  }
  int value=i+1;
  storeIndexes(arr,n,value,key,ans);
}
int getIndex(int arr[],int& n ,int& i,int& key){
  if(i>=n){
    return -1;
  }
  if(arr[i]==key){
    return i;//return first element containing that key
  }
  int val =i+1;
  return getIndex(arr,n,val,key);;
}
void getAllIndexes(int arr[],int n ,int i,int key){
  if(i>=n){
    return;
  }
  if(arr[i]==key){
    cout<<i<<" ";//returns all indexes containing particular key
  }
getAllIndexes(arr,n,i+1,key);;
}
void print(int arr[],int n,int i){
  if(i>=n){
    return;
  }
  cout<<arr[i]<<" ";
  print(arr,n,i+1);
}
void printArray(int arr[],int n){
  if(n ==0){
    return ;
  }
  cout<<*arr<<" ";
  printArray(arr+1,n-1);
  }
void getMax(int arr[],int n,int i,int& maxi){
    if(i>=n){
    return;
  }
  maxi=max(maxi,arr[i]);//1 case solve karo 
  // if(arr[i]>maxi){
  //   maxi=arr[i];
  // }
  getMax(arr,n,i+1,maxi);//ye sab recursion dekh lega
}
void getMin(int arr[],int n,int i,int& mini){
    if(i>=n){
    return;
  }
  mini=min(mini,arr[i]);
  // if(arr[i]<mini){
  //   mini=arr[i];
  // }
  getMin(arr,n,i+1,mini);
}
int main() {
  int arr[]={40,10,20,30,40,50,40,};
  int i=0;
  int n=sizeof(arr)/sizeof(arr[0]);
 //  print(arr,n,i);
printArray(arr,n);
 //  cout<<endl;
 //  int maxi=INT_MIN;
 //  int mini=INT_MAX;
 //  // int ans=getMax(arr,n, i);
 //  // cout<<ans<<endl;
 // getMax(arr,n,i,maxi);
 //  cout<<maxi<<endl;
 //  getMin(arr,n,i,mini);
 //  cout<<mini<<endl;
  int key=40;
  // bool ans=getKey(arr,n,i,key);
  // cout<<ans<<endl;
  // int ans=getIndex(arr, n, i, key);
  // cout<<ans<<endl;
  // getAllIndexes(arr, n, i, key);
  int n1=36;
 // printCounting(n1);
  cout<<endl;
  // vector<int> ans;
  // storeIndexes(arr,n,i,key,ans);
  // cout<<endl;
  // for(auto val:ans){
  //   cout<<val<<" ";
  // }
  printCounting1(n1);
}
