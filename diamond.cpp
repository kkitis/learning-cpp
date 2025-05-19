#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter a no:";
    cin>>n;
    for (int i = 1; i <=n; i++)
    {
        for (int j = n; j >=i; j--)
        {
            cout<<" ";
            
           
        }
        for (int k = 1; k <=i ; k++)
        {
            cout<<"*";
        }
        for (int l=i-2; l>=0; l--)
        {
            cout<<"*";
        }
        for (int m = n; m >=i; m--)


        
        
        {
            cout<<" ";
            
           
        }
        for (int q= n; q >=i; q--)
        {
            cout<<" ";
            
           
        }

        for (int p = 1; p <=i ; p++)
        {
            cout<<"*";
        }
        for (int r=i-2; r>=0; r--)
        {
            cout<<"*";
        }
        
        cout<<endl;
    }
        for (int i = n-1; i >=1; i--)
    {
        for (int j = n; j >=i; j--)
        {
            cout<<" ";
            
           
        }
        for (int k = 1; k <=i ; k++)
        {
            cout<<k;
        }
        for (int l=i-2; l>=0; l--)
        {
            cout<<l+1;
        }
        
        
        cout<<endl;
    }

    return 0;
}