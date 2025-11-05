//
// Created by ema on 2.11.25.
//

#include <iostream>
using namespace std;

int sumOfDigits(int number) {
    int sum = 0;
    while(number!=0) {
        sum += number%10;
        number/=10;
    }
    return sum;
}
int reverse(int n) {
    int reversed = 0;
    while(n!=0) {
        int cifra = n%10;
        reversed = reversed * 10 + cifra;
        n/=10;
    }
    return reversed;
}
int main() {
    int n;
    cin>>n;
    for(int i=1; i<n; i++) {
        int j = n - i;
        if(reverse(i)%sumOfDigits(j)==0) {
            cout<<i<<" "<<j<<" "<<endl;
        }
    }
    return 0;
}