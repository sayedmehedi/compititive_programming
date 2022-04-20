#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n,num,dif=0;
    cin>>n;

    int arr [n];



    for(int i=0;i<n;i++)
    {
        dif+=abs(num[i]- num[i+1]);

    }

    auto pos=find(arr,arr+n,dif);

    count<<pos;




}

