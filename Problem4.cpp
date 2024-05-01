#include<iostream>
using namespace std;
#include <bits/stdc++.h>
using namespace std;
bool is3digit(int n){
    int count=0;
    while(n!=0){
        count++;
        n/=10;
    }
    if(count==3)return true;
    return false;
}
bool isPalindrome(string S)
{
    string P = S;
    reverse(P.begin(), P.end());
    if (S == P) {
        return true;
    }
    else {
        return false;
    }
}
int main()
{
    for(int i=998001;i>100001;i--){
        if(isPalindrome(to_string(i))){
            for(int j=999;j>101;j--){
                if(i%j==0 && is3digit(i/j)){
                    cout<<i<<endl;
                    break;
                }
            }
        }
    }
    return 0;
}