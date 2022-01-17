#include<iostream>
#include<chrono>
using namespace std;
using namespace std::chrono;

int main() {
    unsigned long long x = 0;
    unsigned long long y = 1;
    auto start = high_resolution_clock::now();
    for(int i = 2; i < 100; i++) {
        unsigned long long temp = x + y;
        cout << temp << endl;
        x = y;
        y = temp;
    }
    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<nanoseconds>(stop - start);
    cout << "time: " << duration.count() << endl;
    return 0;
}