#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    for (int tt=0; tt<t; tt++) {
        int n,d;
        cin >> n >> d;

        vector<int> a(n);
        for (int i=0; i<n; i++) {
            cin >> a.at(i);
        }

        for (int i=1; i<n; i++) {
            while (a.at(i)) {
                if (d-i >= 0) {
                    a.at(i)--;
                    a.at(0)++;
                    d -= i;
                } else {
                    break;
                }
            }
        }

        cout << a.at(0) << endl;
    }
}