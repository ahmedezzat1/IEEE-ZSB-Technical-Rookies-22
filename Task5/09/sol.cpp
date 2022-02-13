#include <bits/stdc++.h>

using namespace std;
    int main() {
        file();
        fast
        int t;
        cin >> t;
        while (t--) {
            string s;
            cin >> s;
            string cur = "hackerrank";
            int st = 0;
            for (int i = 0; i < s.size() && st < cur.size(); i++) {
                if (s[i] == cur[st]) {
                    st++;
                }
            }
            if (st == cur.size()) {
                cout << "YES" << endl;
            }
            else {
                cout << "NO" << endl;
            }
        }
    }

