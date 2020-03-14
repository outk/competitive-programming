#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    int u,v;
    vector<vector<int>> tree(n);
    vector<pair<int, int>> edges(n-1);
    vector<vector<pair<int, int>>> edgeneighber;
    map<pair<int, int>, int> edgetree;
    for (int i=0; i<n-1; i++) {
        cin >> u >> v;
        u--;
        v--;
        tree.at(u).push_back(v);
        tree.at(v).push_back(u);
        edgetree[make_pair(u, v)] = -1;
        edges.at(i) = make_pair(u, v);
    }

    int maxind = -1;

    for (int i=0; i<n; i++) {
        if (maxind < tree.at(i).size()) maxind = i;
    }

    stack<pair<int, int>> st;

    for (int i=0; i<n; i++) {
        if (edgetree.find(make_pair(maxind, i)) != edgetree.end()) {
            st.push(make_pair(maxind, i));
        }
        if (edgetree.find(make_pair(i, maxind)) != edgetree.end()) {
            st.push(make_pair(i, maxind));
        }
    }

    pair<int, int> nowedge;

    int c = 0;

    while (!st.empty()) {
        nowedge = st.top();
        st.pop();

        if (edgetree[nowedge] == -1) {
            edgetree[nowedge] = c;
            c++;
            for (int i=0; i<n; i++) {
                if (edgetree.find(make_pair(maxind, i)) != edgetree.end() && ) {
                    st.push(make_pair(maxind, i));
                }
                if (edgetree.find(make_pair(i, maxind)) != edgetree.end()) {
                    st.push(make_pair(i, maxind));
                }
            } 
        }

    }

    

    for (int i=0; i<n-1; i++) {
        cout << edges.at(i) << endl;
    }
}
