#include<bits/stdc++.h>

using namespace std;

int main()

{

    int n,i,count=1,l=0;
    cin>>n;
    int arr[n+10];

    for(i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    for(i=1;i<n;i++)
    {
        if(arr[i]>arr[i-1])
            count++;
        else
        {
            l=max(count,l);
            count=1;

        }
    }

    l=max(count,l);
    cout<<l<<endl;
    return 0;


}



