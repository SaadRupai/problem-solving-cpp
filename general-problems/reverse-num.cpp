#include<bits/stdc++.h>
using namespace std;
int main(){
    int num, revNum=0;
    cin>>num;
    while(num>0){
        revNum *= 10;
        // int lastNum = num%10;
        revNum += num%10;  //lastNum
        num/=10;
    }
    cout<<revNum;
}