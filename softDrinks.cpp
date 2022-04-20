#include<iostream>

using namespace std;

int main() {
    int n,k,l,c,d,p,nl,np;

    cin>>n>>k>>l>>c>>d>>p>>nl>>np;

    int first_number = (k*l)/n;

    int second_number = c*d;

    int third_number = p/np;
    int min = 0;

    if(first_number<second_number && first_number<third_number)
    {
        min = first_number;
    }else if(second_number<third_number && second_number<first_number){
        min=second_number;
    }else min=third_number;

    cout<<min/n;
}
