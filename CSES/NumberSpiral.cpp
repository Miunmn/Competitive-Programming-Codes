#include <iostream>
#include <bits/stdc++.h>

#define ll long long int

using namespace std;
int main() {
  int t; 
  cin>>t;
  while(t--){
  ll y,x;
  cin>>y>>x;
  ll z= max(y,x);
  ll z2 = (z-1)*(z-1),ans;
  
  //z es par
  if(z%2){
    if(z==y){
      ans = z2+x;
    }else{
      ans = z2+2*z-y;
    }
  }else{
    if(x==z){
        ans = z2+y;
    }else{
      ans = z2+2*z-x;
    }
  }
  
  cout<< ans << "\n";
  }
  return 0;
}

