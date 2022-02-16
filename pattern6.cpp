# include<iostream>
using namespace std;
int main(){

    int n;
    cin>>n;
    int count;
    count=1;
    for (int i = 1; i <= n; i++)
    {
        for (int x = 1; x <= i; x++)
        {
            cout<<count<<' ';
            count+=1;
        }
        
        cout<<endl;
    }
    





    }