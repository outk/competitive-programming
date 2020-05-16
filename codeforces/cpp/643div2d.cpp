#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ll n, s;
    cin >> n >> s;

    if (2*n > s) cout << "NO" << endl;
    else {
        cout << "YES" << endl;
        for (int i=0; i<n-1; i++) {
            cout << 2 << " ";
        }
        cout << s - (n-1)*2 << endl;
        cout << 1 << endl;
    }
}