//
// Created by ema on 22.12.25.
//
#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;

// Да се напише функција која ќе одредува дали една текстуална низа е подниза на друга текстуална низа.

int findSubstr(char *str1, char *str2) {
    int len1 = strlen(str1);
    int len2 = strlen(str2);
    if (len2 > len1) {
        return 0;
    }
    for (int i = 0; i <= len1 - len2; i++) {
        if (str1[i] == str2[0]) {
            int flag = 1;
            for (int j = 1; j < len2; j++) {
                if (str1[i + j] != str2[j]) {
                    flag = 0;
                    break;
                }
            }
            if (flag == 1) {
                return 1;
            }
        }
    }
    return 0;
}

int main() {
    char str1[100], str2[100];
    cin.getline(str1, 100);
    cin.getline(str2, 100);
    if (findSubstr(str1, str2)) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
}
