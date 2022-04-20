#include<iostream>
#include<string>
#include <algorithm>

using namespace std;

int main()
{

    string word;

    cin>>word;

    int l=word.length();

    transform(word.begin(), word.end(), word.begin(), ::tolower);

    for(int i=0;i<l;i++)
        {

            if((word[i]=='a')||(word[i]=='e')||(word[i]=='i')||(word[i]=='o')||(word[i]=='u')||(word[i]=='y'))
            continue;


            else
            cout<<"."<<word[i];

        }



return 0;


}
