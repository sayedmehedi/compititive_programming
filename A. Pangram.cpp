#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    set<char> s;

    for(int i=0; i<n; i++)
    {

        char ch;
        cin>>ch;
        s.insert(tolower(ch));
    }

    int t=s.size();
    if(t==26) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;

}
