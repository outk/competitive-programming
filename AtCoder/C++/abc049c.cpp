#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;

    vector<string> v = {"dream", "dreamer", "erase", "eraser"};

    int i=(int)s.size()-1;

    string ans = "YES";

    while (i >= 4) {
        if (s.at(i) == 'r') {
            if (i-6 >= 0) {
                if (s.substr(i-6, 7) == "dreamer") {
                    i -= 7;
                } else if (s.substr(i-5, 6) == "eraser") {
                    i -= 6;
                } else {
                    ans = "NO";
                    break;
                }
            } else if (i-5 >= 0) {
                if (s.substr(i-5, 6) == "eraser") {
                    i -= 6;
                } else {
                    ans = "NO";
                    break;
                }
            } else {
                ans = "NO";
                break;
            }
        } else if (s.at(i) == 'm') {
            if (i-4 >= 0) {
                if (s.substr(i-4, 5) == "dream") {
                    i -= 5;
                } else {
                    ans = "NO";
                    break;
                }
            } else {
                ans = "NO";
                break;
            }
        } else if (s.at(i) == 'e') {
            if (i-4 >= 0) {
                if (s.substr(i-4, 5) == "erase") {
                    i -= 5;
                } else {
                    ans = "NO";
                    break;
                }
            } else {
                ans = "NO";
                break;
            }
        } else {
            ans = "NO";
            break;
        }
    }

    cout << ans << endl;

}