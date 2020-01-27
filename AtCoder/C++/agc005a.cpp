#include <bits/stdc++.h>
using namespace std;

int main() {
    string x;
    cin >> x;

    int ans=0, sc=0;
    for (int i=0; i<x.size(); i++) {
        if (x.at(i) == 'S') sc++;
        if (x.at(i) == 'T') {
            if (sc) {
                sc--;
            } else {
                ans++;
            }
        }
    }

    cout << ans+sc << endl;
}