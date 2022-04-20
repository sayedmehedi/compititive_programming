#include<bits/stdc++.h>
using namespace std;

int main()
{

    string word;
    cin>>word;
    int c=0,d=0;

    for(size_t i=0; i<word.length(); i++)

    {
        if(word[i]>='a' && word[i]<='z')
            c++;
        else
            d++;

    }
    if(c>d)
    {
        transform(word.begin(),word.end(),word.begin(),::tolower );
    }
    else if(c<d)
    {
        transform(word.begin(),word.end(),word.begin(),:: toupper);
    }
    else
        transform(word.begin(),word.end(),word.begin(),::tolower);
    cout<<word<<endl;
    return 0;

}

