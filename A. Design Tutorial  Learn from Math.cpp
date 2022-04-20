#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    int j=n;
    cin>>n;
    if(n%2==0&&(n/2)%2==0)
        cout<<n/2<<" "<<n/2<<endl;

    else if(n%2==1)
        cout<<"9"<<" "<<(n-9)<<endl;




}
