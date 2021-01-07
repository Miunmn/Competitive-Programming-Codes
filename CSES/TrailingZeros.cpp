#include<iostream>

using namespace std;
int main(){
    using ll = long long int;
    ll n;
    cin >> n;
    ll ans = 0;
    for(ll i = 5 ; i <= n ; i*=5){
        ans+=n/i;
    }
    cout<<ans;
return 0;
}