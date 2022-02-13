#include<iostream>
using namespace std;
int main(){
    int row;int col;int con;
    cin>>row>>col;
    // con =row-1;
    for(int i=1; i<=row;i++){
             
        for (int j=1;j<=col;j++)
        {
            if (i==1 || i==row || j==1 || j==col)
                {               
                    cout<<"*";
                }
            else
            {
                cout<<" ";
                }} 
                cout<<endl;  
        }
        
}


// ****
// *  *
// *  *
// ****