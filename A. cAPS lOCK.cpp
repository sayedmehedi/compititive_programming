#include<bits/stdc++.h>
using namespace std;

int main()

{
    string c;
    int count=0;

    cin>>c;

    int l=c.length();
    if(l<2)
    {
        if(c[0]>='a'&& c[0] <='z')
            putchar(toupper(c[0]));
        else
           putchar(tolower(c[0]));
    }

    else

    {

        for(size_t i=0; i<c.length(); i++)
        {
            if((c[i]>='A'&& c[i] <='Z'))
                count=2;
            else
            {
                count=0;
                break;
            }

        }

        if(count==0)
        {
            for(size_t i=1; i<c.length(); i++)
            {

                if((c[0]>='a'&& c[0] <='z')&&(c[i]>='A'&& c[i]<='Z'))
                    count=1;
                else
                {
                    count=0;
                    break;
                }


            }
        }

        if(count==1)
        {
            putchar(toupper(c[0]));
            for(size_t i=1; i<c.length(); i++)
            {
                putchar(tolower(c[i]));
            }

        }
        else if(count==2)
        {
            for(size_t i=0; i<c.length(); i++)
            {
                putchar(tolower(c[i]));
            }
        }

        else
        {

            for(size_t i=0; i<c.length(); i++)
            {
                putchar(c[i]);
            }
        }


    }



}




