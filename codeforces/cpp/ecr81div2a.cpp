#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    for (int i=0; i<t; i++) {
        long long n;
        cin >> n;

        if (n%2) {
            cout << 7;
            n -= 3;
            while (n) {
                n = n-2;
                cout << 1;
            }
        } else {
            while (n) {
                n = n-2;
                cout << 1;
            }
        }

        cout << endl;
    }
}