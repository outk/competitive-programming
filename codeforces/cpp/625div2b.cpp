#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    map<long long, long long> m;
    long long b, cl, ans = 0;
    for (int i=0; i<n; i++) {
        cin >> b;
        cl = b - i;
        if ( m.find(cl) == m.end() ) {
            m[cl] = b;
            if (b > ans) ans = b;
        } else {
            m[cl] = m[cl] + b;
            if (m[cl] > ans) ans = m[cl];
        }
    }

    cout << ans << endl;
    
}