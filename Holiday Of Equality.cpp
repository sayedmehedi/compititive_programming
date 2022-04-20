#include<bits/stdc++.h>

using namespace std;

int main()
{

    int n;
    set<int>s;

    cin>>n;
    int arr[n];
       for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        s.insert(arr[i]);

    }


    if(n<2)
    {
        cout<<"0"<<endl;
    }

    else {


    int sum=0;
   for (auto it=s.begin(); it != s.end(); ++it)
   {
       sum=sum+ *it;
   }



    cout<<sum;

    }




}
