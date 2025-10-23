#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> p(n), q(n);

    for (int i = 0; i < n; i++) {
        cin >> p[i];
    }

    // Compute inverse permutation
    for (int i = 0; i < n; i++) {
        q[p[i] - 1] = i + 1; // p[i] received gift from i+1
    }

    for (int i = 0; i < n; i++) {
        cout << q[i] << " ";
    }
    cout << endl;

    return 0;
}

