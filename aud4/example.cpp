//
// Created by ema on 20.10.25.
//
#include<iostream>
using namespace std;

int main() {
    int sum=0;
    int n;
    cin>>n;
    //suma na prvite n broevi
    //while
    while(n>0) {
        sum+=n;
        --n;
    }
    cout<<sum;

    //do-while
    do {
        sum+=n;
        --n;
    } while (n>0);
    cout<<sum;

    //for ciklus
    for(int i=1; i<=n; i++) { //for(int i=n; i>0; i--)
        sum+=i;
    }
    cout<<sum;

    return 0;
}