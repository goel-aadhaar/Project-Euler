#include<iostream>
using namespace std;

int main()
{
    long long x=4000000;
    int start=1;
    int end=1;
    int ans=0;
    int sum=0;
    for(int i=1;i<=x;i++){
        if(ans>4000000)break;
        ans=start+end;
        if(ans%2==0){
            sum+=ans;
            // cout<<ans<<endl;
        }
        start=end;
        end=ans;

    }
    cout<<sum;
    return 0;
}