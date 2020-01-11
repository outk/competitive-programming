#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    string s;
    cin >> s;

    int i=0, ans=0;

    while (i<n-2) {
        if (s.at(i) == 'A') {
            if (s.at(i+1) == 'B') {
                if (s.at(i+2) == 'C') ans++;
            }
        }

        i++;
    }

    cout << ans << endl;
}