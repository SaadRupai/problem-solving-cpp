#include<bits/stdc++.h>
using namespace std;

int factorial(int num){
    if(num == 1){
        return num;
    }
    else{
        return num*factorial(num-1);
    }
}

int main(){
    int num;
    cin>>num;
    cout<<factorial(num)<<endl;
}