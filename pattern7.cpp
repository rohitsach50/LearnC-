# include<iostream>
using namespace std;
int main(){

    int n;
    cin>>n;

    int count;
    count=n;
    for (int i = 1; i <= n; i++)
    {
        for (int x = 1; x <= i; x++)
        {
            cout<<'*'<<' ';
        }
        int space;
        space = n*2 - 2*i;
        for (int j=1; j <= space; j++)
        {
            cout<<' '<<' ';
        }
        for (int x = 1; x <= i; x++)
        {
            cout<<'*'<<' ';
        }
        

        
        cout<<endl;
    }


    for (int i = n; i >= 1; i--)
    {
        for (int x = i; x >= 1; x--)
        {
            cout<<'*'<<' ';
        }
        int space;
        space = n*2 - 2*i;
        for (int j=1; j <= space; j++)
        {
            cout<<' '<<' ';
        }
        for (int x = i; x >= 1; x--)
        {
            cout<<'*'<<' ';
        }
        

        
        cout<<endl;
    }
    
    

    }