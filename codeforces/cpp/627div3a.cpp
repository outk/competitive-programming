#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    for (int tt=0; tt<t; tt++) {
        int n;
        cin >> n;

        string ans = "YES";

        vector<int> a(n);
        for (int i=0; i<n; i++) {
            cin >> a.at(i);
        }

        for (int i=1; i<n; i++) {
            if (abs(a.at(i)-a.at(i-1))%2 != 0) ans = "NO";
        }

        cout << ans << endl;

    }
}