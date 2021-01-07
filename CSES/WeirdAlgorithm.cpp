#include <iostream>
#define ll long long int
using namespace std;
int main() {
ll a;
cin >> a;
cout<<a;
while(a != 1){
a=a%2==0?a/2:a*3+1;
cout<<" "<<a;
}
return 0;
}