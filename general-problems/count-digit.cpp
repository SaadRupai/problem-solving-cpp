#include<bits/stdc++.h>
using namespace std;
int main(){
    int num,count=0;
    cin>>num;
    if(num == 0){
        cout<<"Num cannot be zero"<<endl;
    }
    else{
        if(num<0){
            num = num*-1;
        }
        while(num>0){
            num /= 10;
            count++;
        }
    }
    cout<<"digit count: "<<count<<endl;
}