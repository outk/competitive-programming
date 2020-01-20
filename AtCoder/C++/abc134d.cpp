#include<bits/stdc++.h>
using namespace std;

int main() {
    long long n;
    cin >> n;

    vector<long long> a(n);
    for (int i=0; i<n; i++) cin >> a.at(i);

    for (int i=n-1; i>=0; i--) {
        for (int j=2; j*(i+1)-1<n; j++) a.at(i) ^= a.at(j*(i+1)-1);
    }

    long long m=0;

    for (int i=0; i<n; i++) if (a.at(i)) m++;

    cout << m << endl;

    for (int i=0; i<n; i++) {
        if (a.at(i)) cout << i+1 << ' ';
    }

    cout << endl;
}