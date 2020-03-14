#include <bits/stdc++.h>
using namespace std;

int main() {
    unsigned long long a, b, c;
    cin >> a >> b >> c;

    cout << 4*a*b << endl;

    if (4*a*b < (c-a-b)*(c-a-b)) {
        if (c-a-b > 0) {
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
    }
    else cout << "No" << endl;
}