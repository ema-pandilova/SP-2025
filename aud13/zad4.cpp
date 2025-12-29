//
// Created by ema on 28.12.25.
//
#include<iostream>
#include<cstring>
#include <cctype>

using namespace std;

// Се внесува цел број N (N<=100), а во продолжение, се внесуваат N текстуални низи (реченици) со максимална должина од 100 знаци, секоја во нов ред. Низите се составени од букви, цифри и специјални знаци. Напишете програма којашто:
//
// Секоја низа ja трансформира такашто ги исфрла сите самогласки (и мали и големи букви).
// Трансформацијата на низата да се изведе со функцијa, во спротивно нема да се доделат поени!
// Да се отпечати трансформираната влезна низа.

void vowelTransform(char str[]) {
    int j = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        char c = str[i];
        if (!(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'A' || c == 'E' || c == 'I' || c == 'O'
              || c == 'U')) {
            str[j++] = c;
        }
    }
    str[j] = '\0';
}

int main() {
    int n;
    cin >> n;
    char sentence[101];
    cin.ignore();

    for (int i = 0; i < n; i++) {
        cin.getline(sentence, 101);
        vowelTransform(sentence);
        cout << sentence << endl;
    }
}
