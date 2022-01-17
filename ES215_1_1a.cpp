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
    for(int i = 1; i <= 45; i++) {
        cout << fibonacci(i) << endl;
    }
    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<nanoseconds>(stop - start);
    cout << "time: " << duration.count() << endl;
    return 0;
}