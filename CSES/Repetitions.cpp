#include <iostream>
#include <bits/stdc++.h>
#include<vector>
#define ll long long int
 
using namespace std;
int main() {
  string a;
  cin >> a;
  int contMayor = 0;
  int cont_aux = 1;
  for(int i = 0 ; i < a.size(); i++) {
    if(a[i] == a[i+1]){
      cont_aux++;
    }
    else{
      contMayor = max(cont_aux, contMayor);
      cont_aux=1;
 
    }
  }
cout<<contMayor;
 
 
  return 0;
}