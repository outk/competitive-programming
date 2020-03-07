#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    for (int tt=0; tt<t; tt++) {
        int n;
        cin >> n;

        vector<int> a(n);
        for (int i=0; i<n; i++) {
            cin >> a.at(i);
        }

        int output = -1;

        for (int i=0; i<n-1; i++) {
            if (a.at(i)%2 == 0) {
                cout << 1 << endl;
                cout << i+1 << endl;
                output = a.at(i);
                break;
            } else {
                if (a.at(i+1)%2) {
                    cout << 2 << endl;
                    cout << i+1 << ' ' << i+2 << endl;
                    output = a.at(i);
                    break;
                }
            }
        }

        if (output == -1) {
            if (a.at(n-1)%2 == 0) {
                cout << 1 << endl;
                cout << n << endl;
            } else {
                cout << -1 << endl;
            }
        }

    }
}