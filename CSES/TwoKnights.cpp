#include <iostream>
#include <algorithm>

#define ll long long int

using namespace std;
int main() {

  ll t;
  cin>>t;
  ll arrX[t];
  ll arrY[t];
  for(int i = 0 ; i < t;i++){
    ll x_;
    ll y_;

    cin>>x_;
    cin>>y_;

    arrX[i]=x_;
    arrY[i]=y_;


  }
for (int i = 0 ; i < t; i++){
  //cout << arrX[i]+arrY[i]<<"\n";
  ll z = max(arrX[i] , arrY[i]);
  ll z2 = (z-1)*(z-1),ans;
  if(z%2){
    if(arrY[i]==z){
      cout<<z<<"\n";
      cout<<"z impar and y==z\n";
      ans = z2+arrX[i];
    }else{
      cout<<"z impar and y != z\n";
      ans = z2+2*z-arrY[i];
    }

  }else{
    if(arrX[i] == z){
      cout<<"z par and x==z\n";
      ans = z2+arrY[i];
    }else{
      cout<< "z par and x!=z\n";
      ans = z2+2*z-arrX[i];
    }
  }


  cout<<ans<<"\n";
}



  return 0;
}

