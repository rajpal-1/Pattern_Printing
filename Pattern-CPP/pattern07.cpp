#include<iostream>
using namespace std;
int main()
{
    int n,row=1;
    cout<<"enter a number";
    cin>>n;
    while(row<=n)
    {
        int col=1;
        while(col<=n)
        {
            if(col<=row)
            cout<<row<<" ";
            col++;
        }
        row++;
        cout<<endl;
    }
}

/*
1
22
333
*/