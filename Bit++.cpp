#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    cin >> n;  // number of statements
    int x = 0; // initial value of x

    for (int i = 0; i < n; i++) {
        string statement;
        cin >> statement; // read each statement

        // If the statement contains "++", increase x
        if (statement.find("++") != string::npos) {
            x++;
        }
        // Otherwise, it must contain "--", so decrease x
        else {
            x--;
        }
    }

    cout << x << endl; // print final value
    return 0;
}

