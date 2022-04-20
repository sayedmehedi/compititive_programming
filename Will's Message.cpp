#include<iostream>
using namespace std;

int main()
{
    char ch[26];

    while(scanf("%s",ch)!=EOF)
    {
        int n;
        scanf("%d",&n);
        int arr[n];
        for(int i=0; i<n; i++)
        {
            scanf("%d",&arr[i]);
        }
        for(int i=0; i<n; i++)
        {
            cout<<ch[arr[i]-1];
        }
        cout<<endl;
    }

}
