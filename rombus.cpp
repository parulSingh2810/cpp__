#include<iostream>
using namespace std;
int main(){
    int i,j,n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
         for(j=1;j<=n-i;j++)
        {
            cout<<" ";
        }
        
        for(j=1;j<=i;j++)
        {
            cout<<"*";
        }

        
       
        for(j=2;j<=i;j++)
        {
            cout<<"*";
        }
         cout<<endl;

    }
     for(int i=n-1;i>=1;i--)
    {
         for(j=1;j<=n-i;j++)
        {
            cout<<" ";
        }
        
        for(j=1;j<=i;j++)
        {
            cout<<"*";
        }

        
       
        for(j=2;j<=i;j++)
        {
            cout<<"*";
        }
         cout<<endl;

    }
    
    //  for(int i=n;i>=1;i--){
        
    //     for(j=1;j<=i;j++)
    //     {
    //         cout<<"*";
    //     }
    //     int space = 2*n-2*i;
    //     for(j=1;j<=space;j++)
    //     {
    //         cout<<" ";
    //     }
       
    //     for(j=1;j<=i;j++)
    //     {
    //         cout<<"*";
    //     }
    //      cout<<endl;

    // }
    
    
    return 0;

}