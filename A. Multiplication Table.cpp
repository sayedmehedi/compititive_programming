#include<bits/stdc++.h>

using namespace std;

int main()

{

    int n,m,count=0;
    cin>>n>>m;


    int mat [n];

    for(int i{1}; i<=n; i++)
    {
        if(m%i==0 &&(m/i)<=n)
            count++;




    }
    cout<<count<<endl;
}
