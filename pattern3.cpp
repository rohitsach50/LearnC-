#include<iostream>
using namespace std;
int main(){

    int height;int count;
    cout<<"Enter inverted half triangle height ";cin>>height;
    count=height;
    for (int i = height; i>=1;i--)
    {
       for (int j = 1; j<=i; j++)
       {
           cout<<"*";
       }
       cout<<endl;
        
        
    }  
    }
    




// ****
// *  *
// *  *
// ****