//
// Created by ema on 9.11.25.
//
#include <iostream>
using namespace std;
#include <iomanip>

// Напиши програма која ќе пресметува и анализира податоци за температури во повеќе градови во рамки на повеќе денови. Корисникот треба да внесе број на градови и број на денови за кои ќе се внесуваат температурите (температурите се реални броеви).
//
// Програмата треба да ги пресмета и испечати следните информации:
//
// - Просечната температура за секој град во формат како што е прикажан во примерот.
//
// - Редниот број на градот кој имал најниска просечна температура (градовите се нумерираат почнувајќи од реден број 1).
//
// - Вкупниот број на денови во било кој град во кои температурата била над 30°C (ако два града имаат температура над 30°C во ист ден, денот се брои два пати, односно вкупниот број на денови би бил 2).
int main() {
    int n;
    cin>>n;
    int days;
    cin>>days;
    float temp;
    int min_city=1;
    // float min_temp=1000;
    float min_temp;
    int f=0;
    int total_cities=0;
    float avg = 0;
    for(int i=1; i<=n; i++) {
        float sum=0;
        for(int j=0; j<days; j++) {
            cin>>temp;
            sum+=temp;
            if(temp>30) {
                total_cities++;
            }
        }
        if(days==0) {
            avg = 0;
        }
        else {
            avg = (float)sum/days;
        }
        cout<<"Average temperature of city "<<i<<endl;
        cout<<setprecision(4)<<avg<<endl;
        if(f==0) {
            min_temp = avg;
            min_city=i;
            f=1;
        }
        else if(min_temp>avg) {
            min_temp=avg;
            min_city=i;
        }


    }
    cout<<"The lowest average temperature is in city "<<min_city<<endl;
    cout<<"Total days over 30"<<endl;
    cout<<total_cities<<endl;
    return 0;
}

