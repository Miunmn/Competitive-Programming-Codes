#include<iostream>

using namespace std;

int main(){
    using ll = long long int;
    ll t;
    cin>>t;
    while(t--){
        ll a,b;
        cin>>a>>b;
        cout<<"a: "<<a<<" b:"<<b<<"\n";
        string output = (a+b)%3 == 0 && 2*a>=b && 2*b>=a?"YES":"NO"    ;
        cout<<output<<"\n";
    }
return 0;
}
