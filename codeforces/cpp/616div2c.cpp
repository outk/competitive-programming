#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    for (int i=0; i<t; i++) {
        int n,m,k;
        cin >> n >> m >> k;

        vector<int> a(n);
        for (int j=0; j<n; j++) {
            cin >> a.at(j);
        }

        if (m-1 <= k) {
            int ans=0;
            for (int j=0; j<m; j++) {
                if (ans < a.at(j)) ans = a.at(j);
                if (ans < a.at(n-1-j)) ans = a.at(n-1-j);
            }
            cout << ans << endl;
        } else {
            int ans=0;
            for (int j=0; j<=k; j++) {
                int minans=1000000001;
                int e;
                if (n < j+m) e = n;
                else e = j+m;
                for (int s=j; s<e; s++) {
                    if (minans > a.at(s)) minans = a.at(s);
                }
                int f;
                if (0 >= n-1-k+j-m) f = 0;
                else f = n-1-k+j-m;
                for (int s=f; s<n-k+j; s++) {
                    if (minans > a.at(s)) minans = a.at(s);
                }
                if (ans < minans) ans = minans;
            }
            cout << ans << endl;
        }
    }
}