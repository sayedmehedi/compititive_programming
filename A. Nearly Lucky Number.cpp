#include<bits/stdc++.h>

using namespace std;

int main()

{
    long long int n;

    cin>>n;

    string s=to_string(n);

    int l=s.length();
    int c=0,k=0;

    for(size_t i=0;i<l;i++)
    {
        if((s[i]=='4')||(s[i]=='7'))
        c=0;

        else k=1;

    }

    if(l<2)
        cout<<"NO"<<endl;
    else
    {
      if(k==1)
        cout<<"NO"<<endl;

    else
        cout<<"YES"<<endl;
    }

}
