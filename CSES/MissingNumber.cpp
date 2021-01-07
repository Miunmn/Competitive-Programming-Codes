#include <iostream>
#define ll long long int
using namespace std;
int main() {
ll f,s = 0 ;
cin >> f;
for(int i  = 0  ; i < f-1; i++){
 int a;
 cin>>a;
 s=s+a;
}
cout<<f*(f+1)/2-s;
 
return 0;
}