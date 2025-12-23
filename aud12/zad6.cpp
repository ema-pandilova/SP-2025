//
// Created by ema on 22.12.25.
//
#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;

// Да се напише функција која за дадена текстуална низа ќе одредува дали таа е доволно сложена за да биде лозинка.
//Секоја лозинка мора да содржи барем една буква, барем една цифра и барем еден специјален знак

int isValidPassword(char *pass) {
    int len = strlen(pass);
    int spec = 0, cifri = 0, bukvi = 0;
    for (int i = 0; i < len; i++) {
        if (isalpha(pass[i])) {
            bukvi++;
        } else if (isdigit(pass[i])) {
            cifri++;
        } else if (!isalnum(pass[i])) {
            spec++;
        }
    }

    return bukvi && cifri && spec;
}

int main() {
    char pass[100];
    cin.getline(pass, 100);
    if (isValidPassword(pass)) {
        cout << "strong password" << endl;
    } else {
        cout << "not strong password" << endl;
    }
}
