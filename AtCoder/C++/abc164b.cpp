#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b, c, d;
    cin >> a >> b >> c >> d;

    while (a > 0 || c > 0) {
        c -= b;
        if (c <= 0) {
            cout << "Yes" << endl;
            break;
        }
        a -= d;
        if (a <= 0) {
            cout << "No" << endl;
            break;
        }
    }
}