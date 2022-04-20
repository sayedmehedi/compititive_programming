#include<bits/stdc++.h>


using namespace std;

int main ()
{

    int k,n,w;

    cin>>k>>n>>w;

    int t=0;

    for(size_t i{1};i<=w;i++)

        {
           t+=k*i;
        }

        if(n>t)
            cout<<0<<endl;
        else
            cout<<t-n<<endl;


}
