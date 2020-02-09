#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    set<int> a;
    int ae;
    bool failed=false;
    for (int i=0; i<n; i++) {
        cin >> ae;
        if (a.find(ae) != a.end()) failed=true;
        a.insert(ae);
    }

    if (failed) cout << "NO" << endl;
    else cout << "YES" << endl;
}