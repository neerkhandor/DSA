#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int sum(int n){
  if(n<0){
    return 0;
  }
  return n+sum(n-1);
}
void revcounting(int n){
  if(n==0){
    return;
  }
  cout<<n<<" ";
  revcounting(n-1);
}
void counting(int n){
  if(n==0){
    return;
  }
  counting(n-1);
  cout<<n<<" ";
}
int fac(int n){
  // if(n==0){
  //   return n;
  // }
  // if(n==1){
  //   return n;
  // }
  if(n==0){
    return 1;
  }
  else{
    return n*fac(n-1);
  }
}
int fib(int n){
  // if(n==0 || n==1){
  //   return n;
  // }

  if(n==1){
    return 0;
  }
  if(n==2){
    return 1;
  }
  return fib(n-1)+fib(n-2);
}
int power(int n){
  if(n==0){
    return 1;
  }
  return 2*power(n-1);
}
int main() {
  int n;
  cout<<"Enter the number : ";
  cin>>n;
  int ans=fac(n);
  cout<<"factorial of "<<n<<" is "<<ans<<endl;
  int ans1=fib(n);//0 1 1 2 3 5 8 13 
  cout<<n <<"th term is "<<ans1<<endl;
  int ans3=power(n);
  cout<<"two to the power "<<n<<" is "<<ans3<<endl;
  cout<<"printing number from 1 to "<<n<<endl;
  counting(n);
  cout<<endl;
    cout<<"rev_printing number from 1 to "<<n<<endl;
  revcounting(n);
  cout<<endl;
 
  int sum1=sum(n);
 cout<<"sum of first "<<n <<" terms is "<<sum1<<endl;
}