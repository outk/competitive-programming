    #include <bits/stdc++.h>
    using namespace std;

    int main() {
        int h,w;
        cin >> h >> w;

        vector<vector<char>> s(h+2, vector<char>(w+2, '.'));

        for (int i=0; i<h; i++) {
            for (int j=0; j<w; j++) {
                cin >> s.at(i+1).at(j+1);
            }
        } 

        vector<vector<int>> c(h+1, vector<int>(w+1, 0));

        for (int i=0; i<h; i++) {
            for (int j=0; j<w; j++) {
                if (s.at(i+1).at(j+1) == '#') {
                    if (i > 0 && j > 0) {
                        if (s.at(i).at(j+1) == '.' && s.at(i+1).at(j) == '.') {
                            if (c.at(i).at(j+1) < c.at(i+1).at(j)) c.at(i+1).at(j+1) = c.at(i).at(j+1) + 1;
                            else c.at(i+1).at(j+1) = c.at(i+1).at(j) + 1;
                        } else if (s.at(i).at(j+1) == '#' && s.at(i+1).at(j) == '#') {
                            if (c.at(i+1).at(j) > c.at(i).at(j+1)) c.at(i+1).at(j+1) = c.at(i).at(j+1);
                            else c.at(i+1).at(j+1) = c.at(i+1).at(j);
                        } else if (s.at(i).at(j+1) == '#') {
                            if (c.at(i+1).at(j) + 1 > c.at(i).at(j+1)) c.at(i+1).at(j+1) = c.at(i).at(j+1);
                            else c.at(i+1).at(j+1) = c.at(i+1).at(j) + 1;
                        } else if (s.at(i+1).at(j) == '#') {
                            if (c.at(i).at(j+1) + 1 > c.at(i+1).at(j)) c.at(i+1).at(j+1) = c.at(i+1).at(j);
                            else c.at(i+1).at(j+1) = c.at(i).at(j+1) + 1;
                        }
                    } else if (i == 0) {  
                        if (s.at(1).at(j) == '.') c.at(1).at(j+1) = c.at(1).at(j) + 1;
                        else c.at(1).at(j+1) = c.at(1).at(j);
                    } else {
                        if (s.at(i).at(1) == '.') c.at(i+1).at(1) = c.at(i).at(1) + 1;
                        else c.at(i+1).at(1) = c.at(i).at(1);
                    }
                } else {
                    if (i > 0 && j > 0) {
                        if (c.at(i).at(j+1) < c.at(i+1).at(j)) c.at(i+1).at(j+1) = c.at(i).at(j+1);
                        else c.at(i+1).at(j+1) = c.at(i+1).at(j);
                    } else if (i == 0) {
                        c.at(1).at(j+1) = c.at(1).at(j);
                    } else {
                        c.at(i+1).at(j+1) = c.at(i).at(j+1);
                    }
                    
                }
            }
        }

        
        cout << c.at(h).at(w) << endl;

        // for (int i=0; i<h; i++) {
        //     for (int j=0; j<w; j++) {
        //         cout << c.at(i+1).at(j+1);
        //     }
        //     cout << endl;
        // }
    }