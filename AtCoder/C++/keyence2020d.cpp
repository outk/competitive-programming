#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, t;
    cin >> n;

    vector<int> a(n), b(n), ab(2*n);
    for (int i=0; i<n; i++) {
        cin >> t;
        a.at(i) = t;
        ab.at(i) = t;
    }

    for (int i=0; i<n; i++) {
        cin >> t;
        b.at(i) = t;
        ab.at(n+i) = t;
    }

    sort(ab.begin(), ab.end());

    


}