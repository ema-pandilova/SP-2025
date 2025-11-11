//
// Created by ema on 9.11.25.
//
#include <iostream>
using namespace std;

// Да се напише програма во која од тастатура се внесува позитивен цел број N. Програмата треба да го испечати најголемиот делител (помал од бројот N) на бројот N кој содржи само парни цифри. Ако не постојат делители кои го задоволуваат условот програмата печати порака: “None”. Проверката дали даден број содржи само парни цифри да се реализира со посебна функција.
//
// Пример:
// N: 256
// Излез: 64
//
// N: 264
// Излез: 88
//
// N: 55
// Излез: None

bool evenDigits(int number) {
    while(number>0) {
        if((number%10)%2==1)
            return false;
        number/=10;
    }
    return true;
}
int main() {
    int n;
    cin >> n;
    for(int i=n-1; i>0; i--) {
        if(n%i==0 && evenDigits(i)){
            cout << i << endl;
            return 0;
        }
    }
    cout<<"None"<<endl;
    return 0;
}
