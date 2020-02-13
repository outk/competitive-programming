#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    for (int p=0; p<t; p++) {
        int n;
        cin >> n;

        int cmax=0, amin=1000000001, amax=-2, all=0;

        vector<int> a(n);
        cin >> a.at(0);
        for (int i=1; i<n; i++) {
            cin >> a.at(i);
            if (a.at(i) != -1) {
                all = a.at(i);
                if (a.at(i-1) != -1) {
                    if (cmax < abs(a.at(i)-a.at(i-1))) cmax = abs(a.at(i)-a.at(i-1));
                }
            }
        }

        for (int i=1; i<n; i++) {
            if (a.at(i) == -1) {
                if (a.at(i-1) != -1) {
                    if (amin > a.at(i-1)) amin = a.at(i-1);
                    if (amax < a.at(i-1)) amax = a.at(i-1);
                }
            }
        }
        for (int i=1; i<n; i++) {
            if (a.at(n-1-i) == -1) {
                if (a.at(n-i) != -1) {
                    if (amin > a.at(n-i)) amin = a.at(n-i);
                    if (amax < a.at(n-i)) amax = a.at(n-i);
                }
            }
        }

        int k=0;

        if (amin != 1000000001) {
            if ((amax-(amin+amax)/2) > cmax) {
                cmax = amax-(amin+amax)/2;
                k = (amin+amax)/2;
            } else {
                k = (amin+amax)/2;
            }
        }

        cout << cmax << ' ' << k << endl;

    }
}