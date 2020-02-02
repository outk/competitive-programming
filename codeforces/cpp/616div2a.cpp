#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    for (int i=0; i<t; i++) {
        int n;
        cin >> n;
        string s="";
        cin >> s;

        int end=-1;

        for (int j=0; j<n; j++) {
            if ((int)s.at(n-1-j)%2) {
                end = n-1-j;
                break;
            }
        }

        string ss="";
        for (int i=0; i<end+1; i++) {
            if (s.at(i) != '0') ss = ss + s.at(i);
        }

        int odd=0;
        
        for (int j=0; j<ss.size(); j++) {
            if (((int)ss.at(j))%2) odd++;
        }
        if (odd>2) {
            if (odd%2) {
                int skip;
                for (int j=0; j<ss.size(); j++) {
                    if (((int)ss.at(j))%2) {
                        skip = j;
                        break;
                    }
                }
                for (int j=0; j<ss.size(); j++) {
                    if (j != skip) cout << ss.at(j);
                }
                cout << endl;
            } else {
                for (int j=0; j<ss.size(); j++) {
                    cout << ss.at(j);
                }
                cout << endl;
            }
        } else if (odd == 2) {
            for (int j=0; j<ss.size(); j++) {
                cout << ss.at(j);
            }
            cout << endl;
        } else {
            cout << -1 << endl;
        }
    }
}