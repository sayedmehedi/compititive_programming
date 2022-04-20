#include<bits/stdc++.h>
#include <stdio.h>
#include<vector>
using namespace std;
int main()
{
    long long  n,k;
    cin>>n>>k;
    vector<long long >v;
    long long c=0;
    for( long long i=1;i<=n;i++)
    {
       if(i%2!=0)
       {
           v.push_back(i);

       }
    }

    for( long long i=2;i<=n;i=i+2)
    {
       v.push_back(i);

    }

    cout<<v[k-1]<<endl;

    return 0;
}
