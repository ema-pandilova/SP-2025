//
// Created by ema on 22.12.25.
//
#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;


// Да се напише програма која ќе ја отпечати поднизата на дадена текстуална низа (што се внесува од тастатура)
// определена со позицијата и должината, што како параметри се внесуваат од тастатура.
// Поднизата започнува од знакот што се наоѓа на соодветната позиција во текстуалната низа, броејќи од лево.

int main() {
    char str[100];
    cin.getline(str, 100);
    int pos, len;
    cin >> pos >> len;
    for (int i = pos; i < pos + len; i++) {
        if (str[i] == '\0') {
            break;
        }
        cout << str[i];
    }
    char temp[100];
    strncpy(temp, str + pos, len);
    puts(temp);
}
