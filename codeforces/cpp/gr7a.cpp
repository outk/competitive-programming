#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    for (int tt=0; tt<t; tt++) {
        int n;
        cin >> n;

        if (n != 1) {
            cout << 2;
            for (int i=0; i<n; i++) {
                cout << 3;
            }
        } else {
            cout << -1;
        }

        cout << endl;
    }
}