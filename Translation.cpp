#include<iostream>
#include<string>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;
    string t;
    cin>>t;

    reverse(t.begin(),t.end());
    if((s.compare(t)) == 0) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;

}
