
#include <iostream>
#include <algorithm>
#include <cctype>
#include <cstring>
#include <string>
using namespace std;

int main() {
    string name1,name2;
    cin >> name1;
    cin >> name2;
    transform(name1.begin(),name1.end(),name1.begin(),::tolower);
    transform(name2.begin(),name2.end(),name2.begin(),::tolower);
    int result=strcmp(name1.c_str(),name2.c_str());
    cout << result;
    

    return 0;
}
