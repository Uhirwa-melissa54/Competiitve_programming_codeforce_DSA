#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<string> names(n);
    vector<string> finalDecision(n);

    // store how many times each name appeared
    unordered_map<string, int> countMap;

    for (int i = 0; i < n; i++) {
        cin >> names[i];
        countMap[names[i]]++;

        if (countMap[names[i]] == 1) {
            // first time seeing this name
            finalDecision[i] = "OK";
        } else {
            // repeated -> append number
            finalDecision[i] = names[i] + to_string(countMap[names[i]] - 1);
        }
    }

    for (int i = 0; i < n; i++) {
        cout << finalDecision[i] << endl;
    }

    return 0;
}

