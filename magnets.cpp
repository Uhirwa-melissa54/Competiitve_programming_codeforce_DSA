#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    string prev;
    int groups = 0;

    for (int i = 0; i < n; i++) {
        string magnet;
        cin >> magnet;
        if (i == 0) {
            groups = 1; // first magnet starts the first group
        } else if (magnet != prev) {
            groups++; // new group
        }
        prev = magnet;
    }

    cout << groups << endl;
    return 0;
}

