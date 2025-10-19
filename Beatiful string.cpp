#include <bits/stdc++.h>
using namespace std;

// Check if a string is palindrome
bool isPalindrome(const string &s) {
    int n = s.size();
    for(int i = 0; i < n/2; i++) {
        if(s[i] != s[n-1-i]) return false;
    }
    return true;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;

        if(isPalindrome(s)) {
            cout << 0 << "\n";
            continue;
        }

        // Collect indices of '0's and '1's
        vector<int> zeros, ones;
        for(int i = 0; i < n; i++) {
            if(s[i] == '0') zeros.push_back(i+1); // 1-based index
            else ones.push_back(i+1);
        }

        // Try removing all 0s
        string rem;
        for(int i = 0; i < n; i++) {
            if(find(zeros.begin(), zeros.end(), i+1) == zeros.end()) {
                rem += s[i];
            }
        }
        if(isPalindrome(rem)) {
            cout << zeros.size() << "\n";
            for(int idx : zeros) cout << idx << " ";
            cout << "\n";
            continue;
        }

        // Try removing all 1s
        rem = "";
        for(int i = 0; i < n; i++) {
            if(find(ones.begin(), ones.end(), i+1) == ones.end()) {
                rem += s[i];
            }
        }
        if(isPalindrome(rem)) {
            cout << ones.size() << "\n";
            for(int idx : ones) cout << idx << " ";
            cout << "\n";
            continue;
        }

        // If nothing works, output empty string
        cout << 0 << "\n";
    }

    return 0;
}

