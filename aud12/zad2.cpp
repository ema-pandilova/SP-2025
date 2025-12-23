//
// Created by ema on 22.12.25.
//
#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;

// Да се напише функција што ќе ја одредува должината на една текстуална низа.
// Да се даде итеративно и рекурзивно решение

int countCharacter(char *str) {
    int count = 0;
    while (*str != '\0') {
        count++;
        str++;
    }
    return count;
}

int countCharacterRecursive(char *str) {
    if (*str == '\0') {
        return 0;
    } else {
        return 1 + countCharacterRecursive(str + 1);
    }
}

int main() {
    char str[100];
    cin.getline(str, 100);
    cout << countCharacter(str) << endl;
    cout << countCharacterRecursive(str) << endl;
}
