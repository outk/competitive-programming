#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> x(n);
    for (int i=0; i<n; i++) {
        cin >> x.at(i);
    }

    int ans = 1000000000, tmpans=0;

    for (int i=1; i<101; i++) {
        tmpans = 0;
        for (int j=0; j<n; j++) {
            tmpans += (i-x.at(j))*(i-x.at(j));
        }
        if (ans > tmpans) ans = tmpans;
    }

    cout << ans << endl;
}