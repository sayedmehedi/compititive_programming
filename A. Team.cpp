#include<iostream>
#include<string>

using namespace std;

int main()
{

    int n;
    cin>>n;
    int count=0;
    while(n--)
    {   int test[3];

        for(int i=0;i<3;i++)
        {
            cin>>test[i];
        }

    if(((test[0]==1)&&(test[1]==1))||((test[0]==1)&&(test[2]==1))||((test[1]==1)&&(test[2]==1)))
    {
              count++;
    }


    }
    cout<<count;

}
