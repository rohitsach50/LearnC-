#include<iostream>
using namespace std;
int main(){

    int height;
    cout<<"Enter inverted half triangle height ";cin>>height;
    
    for (int i = 1;i<=height;i++)
    {
       for (int j = 1;j<=height;j++)
       {
           if (j<=height-i)
           {
               cout<<" ";
           }
           else{
               cout<<"*";
           }
       }
       cout<<endl;
        
        
    }  
    }
    




// **********
// *********
// ********
// *******
// ******
// *****
// ****
// ***
// **
// *