#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int result(int value);

int main() {
    int numberOfInput;
    cin >> numberOfInput;

    for (int i = 1; i <= numberOfInput; i++) {
        int num;
        cin >> num;

        cout << result(num) << endl;
    }

    return 0;
}

int result(int value) {
    switch (value) {
    case 0:
    case 1:
        return 1;
    case 2:
        return 2;
    case 3:
    case 4:
        return 6;
    case 5:
        return 3;
    default:
        return 9;
    }
}