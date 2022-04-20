#include<bits/stdc++.h>

using namespace std;

int main()
{

    string s;
    cin>>s;
    int j=0;
    char ch;


    while (s[j])
    {

        ch = s[j];

        if(j==0)
            putchar(toupper(ch));


        else
        {
            ch = s[j];
            putchar(ch);
        }



        j++;
    }
}
