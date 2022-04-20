#include<bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    cin>>s;
    int l = s.length();
    //1cout<<l;
    sort(s.begin(),s.end());
    int t=l/2;
    for(int j=t;j<l;j++)
    {
        if(j==l-1)cout<<s[j];
       else cout<<s[j]<<"+";
    }


}
