#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    for (int i=0; i<t; i++) {
        int n,x;
        cin >> n >> x;

        string s;
        cin >> s;

        int smin1, smin0;

        int s0=0, s1=0;
        for (int i=0; i<n; i++) {
            if (s.at(i) == '0') s0++;
            else s1++;
        }

        int d = s0-s1;

        int ans=0;

        int sss0=0, sss1=0;
        for (int i=0; i<n; i++) {
            if (s.at(i) == '0') sss0++;
            else sss1++;
            if ((x-(sss0-sss1))%d == 0) ans++;
        }
        cout << ans << endl;

        

        

        
    }
}