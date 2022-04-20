#include<bits/stdc++.h>

using namespace std;


void count_Notes(int n)
{
    int count=0;
    int arr[]= {100,20,10,5,1};

    for(int i=0; i<5; i++)
    {

        if(n>=arr[i])
        {
            count++;
            n=n-arr[i];

        }

        if(n>=arr[i])
            i--;


    }
    cout<<count<<endl;

}
int main()

{
    int n;
    cin>>n;

   count_Notes(n);

}
