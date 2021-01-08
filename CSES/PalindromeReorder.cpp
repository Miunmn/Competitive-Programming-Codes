#include<iostream>
#include<algorithm>

using namespace std;
int main()
{
    using ll = long long int;
    /*Given a string, your task is to reorder
     its letters in such a way that it becomes a
 palindrome (i.e., it reads 
    the same forwards and backwards).
    */
    string s; 
    //toma el string s    
    cin>>s;

    //crea lista 'c' de size 26 y c1 = 0
    int c[26] = {}, c1=0;
    // por cada char 'c' del string 's'->
    for(char d : s){
        cout<<"d: "<<d<<"\n";
        cout<<"c[d-'A']: "<<c[d-'A']<<"\n";
        ++c[d-'A'];
        cout<<"c[d-'A']: "<<c[d-'A']<<"\n";
        cout<<d-'A'<<"\n";
    }
        

    for(int i = 0 ; i < 26 ; ++i){
        cout<<"c[i]: "<<c[i]<<"\n";
        c1+=c[i]&1;
        cout<<"c1: "<<c1<<"\n";
    }
    cout<<"c1: "<<c1<<"\n";
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