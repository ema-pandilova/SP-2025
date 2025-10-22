//
// Created by ema on 13.10.25.
//

//Да се напише програма каде од тастатура ќе се внесе цена на производ, а потоа ќе ја испечати неговата цена со пресметан ддв.
//
//ПОМОШ: ДДВ е 18% од почетната цена

#include <iostream>
using namespace std;

int main() {
    float cena;
    cin >> cena;
    float ddv = cena*(18/100.0);
    cout<< cena+ddv<<endl;
    return 0;
}

