#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    for (int p=0; p<t; p++) {
        string s;
        cin >> s;

        bool failed = false;

        map<char, pair<char, char>> v;

        for (int i=0; i<26; i++) {
            auto e = make_pair('0', '0');
            char k = 'a' + i;
            v.insert(make_pair(k, e));
        }

        for (int i=1; i<s.size(); i++) {
            if (s.at(i) != s.at(i-1)) {
                if (v.at(s.at(i)).first == '0' || v.at(s.at(i)).first == s.at(i-1)) {
                    v.at(s.at(i)).first = s.at(i-1);
                } else {
                    if (v.at(s.at(i)).second == '0' || v.at(s.at(i)).second == s.at(i-1)) {
                        v.at(s.at(i)).second = s.at(i-1);
                    } else {
                        failed = true;
                        break;
                    }
                }
            } else {
                failed = true;
                break;
            }
        }
        for (int i=1; i<s.size(); i++) {
            int len = s.size()-1;
            if (s.at(len-i) != s.at(len-i+1)) {
                if (v.at(s.at(len-i)).first == '0' || v.at(s.at(len-i)).first == s.at(len-i+1)) {
                    v.at(s.at(len-i)).first = s.at(len-i+1);
                } else {
                    if (v.at(s.at(len-i)).second == '0' || v.at(s.at(len-i)).second == s.at(len-i+1)) {
                        v.at(s.at(len-i)).second = s.at(len-i+1);
                    } else {
                        failed = true;
                        break;
                    }
                }
            } else {
                failed = true;
                break;
            }
        }
        if (failed) {
            cout << "NO" << endl;
        } else {
            cout << "YES" << endl;
        }
    }
}