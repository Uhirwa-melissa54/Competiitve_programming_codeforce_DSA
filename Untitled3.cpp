#include <bits/stdc++.h>
using namespace std;

int findLastZero( string v1) {
    int last = -1;
    for (int i = 0; i < v1.size(); i++) {
        if (v1[i] == '0')
            last = i;
    }
    return last;
}

int findFirstOne(string v1) {
    for (int i = 0; i < v1.size(); i++) {
        if (v1[i] == '1')
            return i;
    }
    return -1;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        string v1;
        cin >> v1;   

        int lastZero = findLastZero(v1);
        int firstOne = findFirstOne(v1);

        if (firstOne == -1 || lastZero == -1) {
            cout << "Bob\n";
        }
        else if (firstOne > lastZero) {
            cout << "Bob\n";
        }
        else {
            cout << "Alice\n" <<(lastZero-firstOne)+1<<"\n"<<firstOne +1<<" "<<lastZero+ 1<<"\n";
        }
    }

    return 0;
}

