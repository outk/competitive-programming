#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    for (int i=0; i<t; i++) {
        int n;
        cin >> n;

        vector<int> a(n);
        for (int j=0; j<n; j++) {
            cin >> a.at(j);
        }

        int fr=-1, fl=n;

        for (int j=0; j<n; j++) {
            if (a.at(j)-j < 0) {
                fl = j;
                break;
            }
        }
        for (int j=0; j<n; j++) {
            if (a.at(n-1-j)-j < 0) {
                fr = n-1-j;
                break;
            }
        }
        
        if (fr + 1 >= fl) cout << "No" << endl;
        else cout << "Yes" << endl;
    }
}