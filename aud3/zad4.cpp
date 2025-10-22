//
// Created by ema on 13.10.25.
//


#include <iostream>
using namespace std;

// Од тастатура се внесуваат координати на една точка од рамнина. Да се напише програма со која ќе се испечати на кој квадрант припаѓа внесената точка.

int main() {
    // I nachin
    // int x,y;
    // cin>>x>>y;
    // if(x>0 && y>0) {
    //     cout<<"I kvadrant"<<endl;
    // }
    // else if(x<0 && y>0) {
    //     cout<<"II kvadrant"<<endl;
    // }
    // else if(x<0 && y<0) {
    //     cout<<"III kvadrant"<<endl;
    // }
    // else if(x>0 && y<0) {
    //     cout<<"IV kvadrant"<<endl;
    // }
    // else if(x==0 && y==0) {
    //     cout<<"koordinaten pochetok"<<endl;
    // }
    // else if(x==0 && y!=0) {
    //     cout<<"lezi na y oska"<<endl;
    // }
    // else{
    //     cout<<"lezi na x oska"<<endl;
    // }
    //
    //   return 0;

    // II nachin

    int x,y;
    cin>>x>>y;

    if(x>0) {
        if (y>0) {
            cout<<"I kvadrant"<<endl;
        }
        else if(y<0) {
            cout<<"IV kvadrant"<<endl;
        }
        else {
            cout<<"lezi na x oska"<<endl;
        }
    }
    else if(x<0) {
        if (y>0) {
            cout<<"II kvadrant"<<endl;
        }
        else if(y<0) {
            cout<<"III kvadrant"<<endl;
        }
        else {
            cout<<"lezi na y oska"<<endl;
        }
    }
    else {
        if(y==0) {
            cout<<"koordinaten pochetok"<<endl;
        }
        else {
            cout<<"lezi na y oska"<<endl;
        }
    }

}