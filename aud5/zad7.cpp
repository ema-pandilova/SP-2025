//
// Created by ema on 26.10.25.
//

#include <iostream>
using namespace std;
// Да се напише програма што од непознат број на цели броеви кои се внесуваат од тастатура ќе ги определи позициите (редните броеви на внесување)
// на двата последователни броја што ја имаат најголемата сума.
// Програмата завршува ако едно по друго (последователно) се внесат два негативни цели броја.
// 2 4 3 4 2 1 1 6 1 7 -1 -1

int main() {
    int prev, curr;
    cin>>prev>>curr;
    if(prev<0 && curr<0) {
        return 0;
    }
    int position = 2;
    int max = 0, max_i;
    for(position = 3; prev>=0 || curr>=0; position++) {
        prev=curr;
        cin>>curr;
        int sum = prev + curr;
        if(sum>max) {
            max = sum;
            max_i = position;
        }
    }
    cout<<max_i<<" "<<max_i-1<<" "<<max<<endl;
    return 0;
}