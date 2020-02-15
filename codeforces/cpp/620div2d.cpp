#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    for (int tt=0; tt<t; tt++) {
        int n;
        cin >> n;

        string s;
        cin >> s;

        vector<int> v(n, 0);
        for (int i=0; i<n-1; i++) {
            if (s.at(i) == '<') {
                v.at(i+1) = v.at(i) + 1;
            }
        }
        for (int i=0; i<n-1; i++) {
            if (s.at(n-2-i) == '>') {
                v.at(n-2-i) = v.at(n-1-i) + 1;
            }
        }

        vector<bool> higher(n), lower(n);
        for (int i=1; i<n-1; i++) {
            if (s.at(i) == '>') {
                if (s.at(i-1) == '<') {
                    higher.at(i) = true;
                }
            }
            if ( s.at(i) == '<') {
                if (s.at(i-1) == '>') { 
                    lower.at(i) = true;
                }
            }
        }
        if (s.at(0) == '<') lower.at(0) = true;
        else higher.at(0) = true;
        if (s.at(n-2) == '<') higher.at(n-1) = true;
        else lower.at(n-1) = true;

        vector<int> ansmin(n, 0), ansmax(n,0);
        int e = 1, h = n;
        for (int i=0; i<n; i++) {
            if (higher.at(i)) {
                ansmin.at(i) = h;
                h--;
            }
        }
        for (int i=0; i<n; i++) {
            if (ansmin.at(n-1-i) != 0) {
                ansmin.at(n-1-i) = e;
                e++;
            }
        }

        int e = 1, h = n;
        for (int i=0; i<n; i++) {
            if (h)
        }

    }
}