#include<iostream>
using namespace std;

int main() {
    int x = 0;
    int y = 1;
    for(int i = 2; i < 100; i++) {
        int temp = x + y;
        cout << temp << endl;
        x = y;
        y = temp;
    }
    return 0;
}
