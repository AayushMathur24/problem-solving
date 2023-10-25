#include <iostream>
using namespace std;

int main()
{
    int r,c;
    cout<<"Enter number of rows : ";
    cin>>r;
    cout<<"Enter number of columns : ";
    cin>>c;
    int arr[r][c];
    cout<<"Enter matrix : \n";
    for(int i=0;i<r;i++)
        for(int j=0;j<c;j++)
            cin>>arr[i][j];
    int x=0;
    cout<<"Boundary elements are : \n";
    while(x<r)
    {
        if(x==0)
        {
            for(int y=0;y<c;y++)
                cout<<arr[x][y]<<' ';
            x++;
        }
        else if(x==r-1)
        {
            for(int y=c-1;y>=0;y--)
                cout<<arr[x][y]<<' ';
            x++;
        }
        else
        {
            cout<<arr[x][c-1]<<' ';
            x++;
        }
    }
    if(c>1)
    {
    for(int i = r-2;i>0;i--)
        cout<<arr[i][0]<<' ';
    }
}
