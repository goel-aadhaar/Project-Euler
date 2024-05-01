#include <iostream>
using namespace std;
int main(){
int mul = 1000;
int i = 10;

while (i<20){
    if (mul%i == 0){
        i++;
        continue;
    }
    else{
        i = 10;
        mul += 20;
    }
    }
cout << mul;
}