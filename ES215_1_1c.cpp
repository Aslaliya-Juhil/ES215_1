#include<iostream>
#include<chrono>
using namespace std;
using namespace std::chrono;

unsigned long long fibonacci(int n, unsigned long long arr[]) {
    if(n == 1 || n == 2) {
        arr[n - 1] = n - 1;
        return n - 1;
    } else if(arr[n - 1] != 0) {
        return arr[n - 1];
    } else {
        arr[n - 1] = fibonacci(n - 1, arr) + fibonacci(n - 2, arr);
        return arr[n - 1];
    }
}
int main() {
    unsigned long long arr[100];
    auto start = high_resolution_clock::now();
    for(int i = 1; i <= 100; i++) {
        cout << fibonacci(i, arr) << endl;
    }
    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<nanoseconds>(stop - start);
    cout << "time/1.618^55: " << duration.count() << endl;
    return 0;
}