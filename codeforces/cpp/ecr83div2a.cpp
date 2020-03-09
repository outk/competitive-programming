#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    for (int tt=0; tt<t; tt++) {
        int n, m;
        cin >> n >> m;

        if (n%m == 0) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}