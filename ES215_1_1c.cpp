#include<iostream>
using namespace std;

int fibonacci(int n, int arr[]) {
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
    int arr[100];
    for(int i = 1; i <= 100; i++) {
        cout << fibonacci(i, arr) << endl;
    }
    return 0;
}
