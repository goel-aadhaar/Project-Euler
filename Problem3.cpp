#include<bits/stdc++.h>
using namespace std;
bool isPrime(long long n) {
  for (long long i = 2; i * i <= n; i++) {
    if (n % i == 0) {
        return false;
    }
    }
    return true;
}
int main()
{
    long long x;
    cin>>x;
    long long maxi=0;
    for(long long i=2;i<x;i++){
        if((x%i)==0){
            if(isPrime(i))maxi=max(maxi,i);
            x/=i;
            // cout<<x<<endl;
            i=2;
        }
        
    }
    cout<<x<<endl;
    return 0;
}