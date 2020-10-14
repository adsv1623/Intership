#include <bits/stdc++.h>

using namespace std;

int main() {
 
    string str1, str2; cin >> str1 >> str2;

    int m = str1.length(), n = str2.length();
    // Outlier Cases
    if (m < n) {
        cout << "Not Possible"; return 0;
    }

    // count of char
    unordered_multiset<char> curr_win, match_win;

    // insert all characters of str2 into match_win
    for (int i = 0; i < n; i++) {
        match_win.insert(str2[i]);
    }
    // Iterating over Str2
    for (int i = 0; i < m; i++) {
        // ADD str1 in curr_win Until length == length match_win ,  then we check Matched or not
        if (i < n) {
            curr_win.insert(str1[i]);
        } else {
            // Matched or not
            if (curr_win == match_win) {
                cout << "substring " << str1.substr(i - n, n) << " present at index " << i - n << '\n';
            }

            // Just delete one Occurence of str2[i] in str1[]
            auto itr = curr_win.find(str1[i - n]);
            if (itr != curr_win.end())
                curr_win.erase(itr);

            // insert next character of string str1 in curr_win
            curr_win.insert(str1[i]);
        }
    }

    // if last m characters of string str1 matches str2,
    if (curr_win == match_win)
    {
        cout << "substring " << str1.substr(m - n, n) <<
             " present at index " << m - n << '\n';
    }



    return 0;
}
