/*
*   
**  
*** 
****
*/
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
        while(col<=row){
           // if(col<=row)
            //{
                cout<<"*";
            //}
            
            col++;
        }
        row++;
        cout<<endl;
    }
}