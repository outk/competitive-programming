#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n, a, b, maxs=0, mins=1e9+1, sums=0;
    cin >> n >> a >> b;

    vector<long long> s(n);
    for (int i=0; i<n; i++) {
        cin >> s.at(i);
        sums += s.at(i);
        if (maxs < s.at(i)) maxs = s.at(i);
        if (mins > s.at(i)) mins = s.at(i);
    }

    double p, q;

    if (maxs - mins != 0) {
        p = ((double)b) / (maxs-mins);
        q = a - (p*sums)/n;
        cout << fixed << setprecision(10) << p << ' ' << q << endl;
    } else if (q == a) {
        p = 0;
        q = a;
        cout << fixed << setprecision(10) << p << ' ' << q << endl;
    } else {
        cout << -1 << endl;
    }


}