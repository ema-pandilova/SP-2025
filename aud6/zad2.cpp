// //
// // Created by ema on 2.11.25.
// //

#include <iostream>
using namespace std;

#define PI 3.1415926
#include <iomanip>
// Да се напишат соодветни функции за пресметување на дијаметар, периметар и плоштина на круг чиј што радиус се предава како аргумент.
// Потоа да се напише и програма во која за внесен (од тастатура) радиус ќе се повикаат овие функции за да се пресметаат дијаметарот,
// периметарот и плоштината на соодветниот круг.

float dijameter(float r) {
    return 2*r;
}
float perimeter(float r) {
    return dijameter(r) * PI;
}
float area(float r) {
    return r*r*PI;
}
int main() {
    float r;
    cin >> r;
    cout<<fixed<<setprecision(2)<<dijameter(r)<<endl;
    cout<<fixed<<setprecision(2)<<perimeter(r)<<endl;
    cout<<fixed<<setprecision(2)<<area(r)<<endl;
}