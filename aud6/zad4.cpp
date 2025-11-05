//
// Created by ema on 2.11.25.
//

#include <iostream>
using namespace std;

// Да се напише програма која за даден природен број ја пресметува разликата помеѓу најблискиот поголем од него прост број и самиот тој број.
// 577 – 573 = 4

int isPrime(int n) {
    int flag=1;
    for(int i=2; i<n; i++) {
        if(n%i==0) {
            return 0;
        }
    }
    return 1;
}
int main() {
    int n;
    cin >> n;
    for(int i=n+1; ;i++) {
        if(isPrime(i)) {
            cout<<i-n<<endl;
            break;
        }
    }
    return 0;
}