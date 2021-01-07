#include <iostream>
using namespace std;


int main(){
    using ll = long long int;
    ll n;
    cin>>n;
    //cantidad total de formas de posicionar ambos caballos
    for(ll i = 1; i <=n ; i++){
        ll total = i*i * (i*i - 1);
        //basicamente la idea es buscar cada caso y tratar de eliminarlo del total de casos posibles
        // que seria (i*i * (i*i - 1))
        ll ans = total - 8 - 24 - (i-4)*4*4 - 16 -(i-4)*4*6 - 8*(i-4)*(i-4); 
        cout<<ans/2<<"\n";
    }

    return 0;
}