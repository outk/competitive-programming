#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    for (int i=0; i<t; i++) {
        int n, a;
        cin >> n;
        int odd=0;
        for (int j=0; j<n; j++) {
            cin >> a;
            if (a%2) odd++;
        }
        if (odd%2) cout << "YES" << endl;
        else {
            if (odd != 0 && n-odd > 0) cout << "YES" << endl;
            else cout << "NO" << endl;
        }

    }
}