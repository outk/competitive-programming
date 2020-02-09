#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    for (int p=0; p<t; p++) {
        int n;
        cin >> n;
        int suma=0;
        int a, ans=0;
        for (int i=0; i<n; i++) {
            cin >> a;
            if (a == 0) {
                suma += 1;
                ans++;
            }
            else suma += a;
        }
        if (suma == 0) ans++;

        cout << ans << endl;
    }
}