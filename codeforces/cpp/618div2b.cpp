#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    for (int u=0; u<t; u++) {
        int n;
        cin >> n;
        vector<long long> als(2*n);
        for (int i=0; i<2*n; i++) {
            cin >> als.at(i);
        }

        sort(als.begin(), als.end());

        cout << als.at(n)-als.at(n-1) << endl;
    
    }
}