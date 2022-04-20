#include<bits/stdc++.h>

using namespace std;

int main()
{


int n,A=0,B=0,C=0,D=0,X=0,Y=0;
    cin>>n;
    int arr[n];



    for(int i=0;i<n;i++)
    {
        cin>>arr[i];

        if(arr[i]==4)
            A++;
        if(arr[i]==3)
            B++;
        if(arr[i]==2)
            C++;
        if(arr[i]==1)
            D++;
    }
 cout<<A<<endl;

    if(D>B)
    {
        A=A+B;
        D=D-B;
        B=0;
    }
 cout<<A<<endl;
    if(B>=D)
    {
        A=A+B;
        B=0;
        D=0;
    }
 cout<<A<<endl;
//    Y=C*2+D;
//    if(C>1&&Y%4==0)
//    {
//        A=A+(Y/4);
//
//        C=0;
//        D=0;
//    }
//    else{
//            A=A+(Y/4)+1;
//            C=0;
//            D=0;
//    }
 cout<<A<<endl;

    if(D>4)
    {

        if(D%4==0)
            A=A+(D/4);
        else
            A=A+(D/4)+1;
    }

    else A=A+1;

    cout<<A<<endl;
}
