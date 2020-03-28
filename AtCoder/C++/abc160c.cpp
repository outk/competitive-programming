#include <bits/stdc++.h>
using namespace std;

int main() {
    long long k, n;
    cin >> k >> n;

    long long longer=0;

    vector<long long> a(n);
    for (int i=0; i<n; i++) {
        cin >> a.at(i);
    }

    longer = k + a.at(0) - a.at(n-1);

    for (int i=1; i<n; i++) {
        if (a.at(i) - a.at(i-1) > longer) {
            longer = a.at(i) - a.at(i-1);
        }
    }

    long long ans = k - longer;

    cout << ans << endl;
}