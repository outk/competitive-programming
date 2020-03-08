#include <bits/stdc++.h>
using namespace std;

int main() {
    int a,b,m;
    cin >> a >> b >> m;

    vector<int> av(a), bv(b);
    int amin=100001, bmin=100001;
    for (int i=0; i<a; i++) {
        cin >> av.at(i);
        if (amin > av.at(i)) amin = av.at(i);
    }
    for (int i=0; i<b; i++) {
        cin >> bv.at(i);
        if (bmin > bv.at(i)) bmin = bv.at(i);
    }

    int ans = amin + bmin;

    for (int i=0; i<m; i++) {
        int x, y, c;
        cin >> x >> y >> c;

        if (ans > av.at(x-1) + bv.at(y-1) - c) ans = av.at(x-1) + bv.at(y-1) - c;
    }

    cout << ans << endl;
    
}