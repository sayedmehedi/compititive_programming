#include<iostream>

using namespace std;

int main() {
   int n,m;

   cin>>n;
   cin>>m;
   for(int i=1;i<=n;i++)
   {
       for(int j=1;j<=m;j++)
       {
           if(i%2==0 && j!=m && j!=1)
           {
               cout<<".";
           }
           else {
               cout<<"#";
           }

       }
       cout<<endl;

   }
}
