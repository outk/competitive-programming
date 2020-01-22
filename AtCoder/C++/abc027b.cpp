#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, suma=0, ans=0;
    cin >> n;

    vector<int> a(n);
    for (int i=0; i<n; i++) {
        cin >> a.at(i);
        suma += a.at(i);
    }

    int p = suma/n;

    if (suma%n) {
        cout << -1 << endl;
    } else {
        int ci=0, tp=0;
        for (int i=0; i<n; i++) {
            ci++;
            tp += a.at(i);
            if (p*ci == tp) {
                ci = 0;
                tp = 0;
            } else {
                ans++;
            }
        }
        cout << ans << endl;
    }

}