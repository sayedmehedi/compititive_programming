#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int main()
{

    string s;

    cin>>s;

    int l=s.length();
    char c[l];
    sort(s.begin(), s.end());
    for(int i=0;i<l;i++)
    {
        if(s[i]=='+')continue;
        if(s[i]==l-2) break;
        else cout<<s[i]<<'+';
    }




}
