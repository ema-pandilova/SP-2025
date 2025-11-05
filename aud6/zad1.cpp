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

int main() {
    int n;
    cin>>n;
    cout<<sumOfDigits(n)<<" "<<n<<endl;
    return 0;
}