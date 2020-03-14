#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    for (int tt=0; tt<t; tt++) {
        int n,a;
        cin >> n;

        set<int> aset;

        for (int i=0; i<n; i++) {
            cin >> a;
            aset.insert(a);
        }

        cout << aset.size() << endl;
    }
}