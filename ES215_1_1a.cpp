#include<iostream>
#include<chrono>
using namespace std;
using namespace std::chrono;

unsigned long long fibonacci(int n) {
    if(n == 1 || n == 2) {
        return n - 1;
    } else {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}
int main() {
    auto start = high_resolution_clock::now();
    // Here, the code was practically at stop after 50th number, so
    // to avoid waiting for a long time, I am stopping it on the 45th
    // step because it is already taking ~17 seconds, while printing
    // 50 numbers was taking ~187 seconds, so using this data, I could
    // infer that it would take ~1.8 lakh years, which is not practical.
    for(int i = 1; i <= 45; i++) {
        cout << fibonacci(i) << endl;
    }
    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<nanoseconds>(stop - start);
    cout << "time: " << duration.count() << endl;
    return 0;
}
