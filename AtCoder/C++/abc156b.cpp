#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,k:
    cin >> n >> k;

    int ans=1;
    while (n) {
        n = n/k;
        if (n) ans++;
    }

    cout << ans << endl;
}