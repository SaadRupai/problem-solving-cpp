#include<bits/stdc++.h>
using namespace std;
bool isPrimeNum();

bool isPrimeNum(int num){
    for(int i=2; i<num; i++){
        if(num%i == 0){
            return false;
        }
    }
    return true;
}

int main(){
    int num;
    bool isPrime = true;
    cin>>num;
    // bool isPrime = isPrimeNum(num);
    for(int i=2; i<num; i++){
        if(num%i == 0){
            isPrime=false;
            break;
        }
    }
    if(isPrime){
        cout<<"prime"<<endl;
    }
    else{
        cout<<"not prime"<<endl;
    }
}