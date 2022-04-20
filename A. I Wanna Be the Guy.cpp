#include <bits/stdc++.h>
using namespace std;

int main()
{

 int luckNumber[]={4,7,47,74,444,447,477,474,777,774,747};

 int n,count=0;
 cin>>n;

 for(size_t i=0;i<11;i++)
 {
     if(n%luckNumber[i]==0)
     {
       count=1;
       break;

     }
     else count=0;


 }

 if(count==1)
    cout<<"YES"<<endl;
 else
    cout<<"NO"<<endl;

return 0;

}
