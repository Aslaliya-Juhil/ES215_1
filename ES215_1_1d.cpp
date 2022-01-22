#include<iostream>
using namespace std;

int main() {
    int arr[100];
    arr[0] = 0;
    cout << arr[0] << endl;
    arr[1] = 1;
    cout << arr[1] << endl;
    for(int i = 2; i < 100; i++) {
        arr[i] = arr[i - 1] + arr [i - 2];
        cout << arr[i] << endl;
    }
    return 0;
}
