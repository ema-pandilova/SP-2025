//
// Created by ema on 9.11.25.
//
#include <iostream>
using namespace std;

// Да се напише програма со која се внесуваат  N цели броеви и којa го печати следниот извештај: максималната вредност, минималната вредност и средна вредност за внесените броеви.
//
// Влез: прво
// се внесува N, а потоа се внесуваат N-те броеви
// Излезот е во формат како во примерот(секоја од бараните вредности во дадениот редослед да биде отпечатена во нов ред)

int main() {
    int n;
    cin>>n;
    int min, max;
    cin>>min;
    max = min;
    int x;
    int sum=min;
    for(int i=1; i<n; i++) {
        cin>>x;
        if(x>max) {
            max=x;
        } else if(x<min) {
            min=x;
        }
        sum+=x;
    }
    cout<<max<<endl;
    cout<<min<<endl;
    cout<<sum*1.0/n<<endl;
    return 0;
}

