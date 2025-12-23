//
// Created by ema on 22.12.25.
//
#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;

// Да се напише функција што ќе одредува колку пати даден знак се наоѓа во даден стринг. Знакот за споредување и стрингот се внесуваат од тастатура.

int findCharacter(char *str, char c) {
    int counter = 0;
    while (*str != '\0') {
        if (*str == c) {
            counter++;
        }
        *str++;
    }
    return counter;
}

// int findCharacter2(char *str, char c, int counter) {
//     if(*str=='\0') {
//         return counter;
//     }
//     else {
//         if(*str==c) {
//             return findCharacter2(str+1,c,counter+1);
//         }
//         else {
//             return findCharacter2(str+1,c,counter);
//         }
//     }
// }
int findCharacter2(char *str, char c) {
    if (*str == '\0') {
        return 0;
    } else {
        if (*str == c) {
            return 1 + findCharacter2(str + 1, c);
        } else {
            return findCharacter2(str + 1, c);
        }
    }
}

int findCharacter3(char *str, char c) {
    int count = 0;
    for(int i=0; i < strlen(str); i++) {
        if (str[i] == c) {
            count++;
        }
    }
    return count;
}

int main() {
    char str[100];
    cin.getline(str, 100);
    char c;
    cin >> c;
    cout << findCharacter(str, c) << endl;
    // cout<<findCharacter2(str, c, 0)<<endl;
}
