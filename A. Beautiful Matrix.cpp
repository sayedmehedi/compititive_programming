#include<bits/stdc++.h>

using namespace std;

int main()
{
    int mat[5][5];
    int on=1;

    for(size_t i{0}; i<5; i++)
    {
        for(size_t j{0}; j<5; j++)
            {
                cin>>mat[i][j];

            }
    }

    auto it =find( reinterpret_cast<int *>( mat ),
                         reinterpret_cast<int *>( mat ) + 5 * 5,
                         on );


    int row = 0;
    int col = 0;

    for (row=0 ; row < 5; row++ )
    {
        col = 0;
        for(col=0;col<5 && mat [row][col]!=on;col++);

           if ( col != 5 ) break;


    }

    row+=1;
    col+=1;
    if((row<4)&&(col<4))
    {
      cout<<6-(row+col)<<endl;
    }
    else if((row<4)&&(col>3))
    {
        cout<<(col-row)<<endl;
    }

    else if((row>3)&&(col<4))
    {
        cout<<(row-col)<<endl;
    }

    else
    {
        cout<<(row+col)-6<<endl;
    }

    return 0;


}



