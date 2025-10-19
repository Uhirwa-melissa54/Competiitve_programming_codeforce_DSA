#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    vector<int> scores(n);

    for (int i = 0; i < n; i++) {
        cin >> scores[i];
    }

    int kth_score = scores[k - 1]; // score of the k-th participant
    int count = 0;

    for (int i = 0; i < n; i++) {
        // participant advances if score >= kth_score and > 0
        if (scores[i] >= kth_score && scores[i] > 0) {
            count++;
        }
    }

    cout << count << endl;
    return 0;
}

