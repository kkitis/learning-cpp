#include <iostream>
using namespace std;
int main (){
    int num,ans=0;
    cout<<"enter decimal number:";
    cin>>num;
    int pow=1;
    while (num>0)
    {
        int rem=num%2;
        num/=2;

        ans+=(rem*pow);
        pow*=10;
    }
    cout<<ans<<endl;
    return 0;
    
}