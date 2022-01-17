#include<iostream>
#include<chrono>
using namespace std;
using namespace std::chrono;

int main() {
    unsigned long long arr[100];
    auto start = high_resolution_clock::now();
    arr[0] = 0;
    cout << arr[0] << endl;
    arr[1] = 1;
    cout << arr[1] << endl;
    for(int i = 2; i < 100; i++) {
        arr[i] = arr[i - 1] + arr [i - 2];
        cout << arr[i] << endl;
    }
    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<nanoseconds>(stop - start);
    cout << "time : " << duration.count() << endl;
    return 0;
}