//interchange value of two vars without usng third var

#include<bits/stdc++.h>
using namespace std;
int main(){
    int a=10,b=20;
    a=a+b;  //30
    b=a-b;
    a=a-b;
    cout<<a<<" "<<b;
    return 0;
}