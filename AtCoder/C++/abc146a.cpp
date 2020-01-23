#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;

    string sun = "SUN", mon = "MON", tue = "TUE", wed = "WED", thu = "THU", fri = "FRI", sat = "SAT";

    if (s == sun) cout << 7 << endl;
    if (s == mon) cout << 6 << endl;
    if (s == tue) cout << 5 << endl;
    if (s == wed) cout << 4 << endl;
    if (s == thu) cout << 3 << endl;
    if (s == fri) cout << 2 << endl;
    if (s == sat) cout << 1 << endl;
    
}