#include <iostream>
using namespace std;
int main(){
    int n,ans=0,pow=1;
    cout<<"enter binary no:";
    cin>>n;
    while (n>0)
    {
        int rem = n%10;
        ans=rem*pow;
        pow=pow*2;
        n=n/10;
    }
    cout<< ans<<endl;
    return 0;
}