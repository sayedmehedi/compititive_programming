#include<bits/stdc++.h>

using namespace std;

int main()
{
    int c=0;
    int found[100];
    int arr [5];
    char hello[5]={'h','e','l','l','o'};
    string chat;
    cin>>chat;

    for(int i{0};i<chat.length();i++)
        {
            found[i]=chat.find(hello[i]);

        }

        for(int j=0;j<5;j++)
        {
            arr[j]=found[j];
        }

        sort(arr,arr+5);

        for(int k=0;k<5;k++)

        {
            cout<<arr[k]<<" "<<found[k]<<endl;
            if(arr[k]==found[k])
                c++;
            else
                break;


        }

        if(c==5)
            cout<<"YES"<<endl;
        else cout<<"NO"<<endl;

}
