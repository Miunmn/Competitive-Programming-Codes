#include<iostream>
#include<algorithm>

using namespace std;
int main()
{
    using ll = long long int;
    /*
    Given a string, your task is to reorder
    its letters in such a way that it becomes a
    palindrome (i.e., it reads 
    the same forwards and backwards).
    */
    string s; 
    cin>>s;
    int c[26] = {}, c1=0;
    for(char d : s)
        ++c[d-'A'];
    for(int i = 0 ; i < 26 ; ++i)
        c1+=c[i]&1;
    if(c1>1){
        cout<<"NO SOLUTION";
    return 0;
    }
    string t;
    for(int i = 0 ; i < 26; ++i)
        if(c[i]&1^1)
            for(int j = 0 ; j < c[i]/2; ++j)
                t+=(char)('A'+i);    
    cout<<t;
    for(int i = 0 ; i < 26 ; i++)
        if(c[i]&1)
            for(int j = 0 ; j<c[i]; j++)
                cout<<(char)('A'+i);

    reverse(t.begin(),  t.end());
    cout<<t;
    return 0;
}