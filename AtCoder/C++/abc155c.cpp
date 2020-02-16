#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    map<string, int> dic{};
    string s;
    for (int i=0; i<n; i++) {
        cin >> s;
        if (dic.end() != dic.find(s)){
            dic[s]++;
        }else{
            dic[s] = 1;
        }
    }

    int nmax=0;

    vector<string> anss;

    for(auto itr = dic.begin(); itr != dic.end(); ++itr) {
        
        if (nmax == itr->second) {
            anss.push_back(itr->first);
        } else if (nmax < itr->second) {
            anss.clear();
            anss.push_back(itr->first);
            nmax = itr->second;
        }
    }

    std::sort(anss.begin(), anss.end());

    for (int i=0; i<anss.size(); i++) {
        cout << anss.at(i) << endl;
    }
}