#include <iostream>
#include <bits/stdc++.h>
 
using namespace std;
int main() {
  long long n = 0;
  cin>>n;
  if (n==1 ){
	cout<<"1";
	return 0;
	}
  if(n<=3 && n>1){
    cout<<"NO SOLUTION";
    return 0;
  }
	if(n%2 == 0 ){
		for (int i  = 2; i <= n ; i = i+2){
			cout<<i<<" ";
		}
    for(int i = 1 ; i < n; i+=2){
      cout<<i<< " " ;
    }
 
	}	
	if(n%2!=0){
			for (int i  = 2; i <n ; i+=2){
			cout<<i<<" ";
		}
		for(int i = 1; i<=n; i+=2){
			cout<<i<<" ";
		}
	}
  return 0;
}