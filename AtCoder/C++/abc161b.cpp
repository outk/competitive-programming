#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    vector<double> a(n);
    double suma=0;
    for (int i=0; i<n; i++) {
        cin >> a.at(i);
        suma += a.at(i);
    }

    int c=0;

    for (int i=0; i<n; i++) {
        if (suma/(4.0*m) <= a.at(i)) c++;
    }

    if (c >= m) cout << "Yes" << endl;
    else cout << "No" << endl;
}