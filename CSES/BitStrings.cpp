#include<iostream>

using namespace std;
int main(){
    using ll = long long int;
    ll n, s=1;
    cin>>n;
    ll nro =((int)1e9+7); 
    for(int i = 0 ; i < n; i++){
        s = 2*s%nro;
    }
    cout<<s;
}