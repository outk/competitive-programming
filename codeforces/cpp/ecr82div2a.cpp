#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    for (int p=0; p<t; p++) {
        string s;
        cin >> s;

        int j=0, tmp0=0, ans=0;

        for (int i=0; i<s.size(); i++) {
            while (j<s.size()) {
                if (s.at(j) == '1') {
                    j++;
                    while (j<s.size()) {
                        if (s.at(j) == '0') {
                            tmp0++;
                        } else {
                            ans += tmp0;
                            tmp0 = 0;
                        }
                        j++;
                    }
                    break;
                }
                j++;
            }
        }

        cout << ans << endl;
    }
}