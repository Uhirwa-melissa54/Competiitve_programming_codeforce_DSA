#include <iostream>
#include <cctype>
#include <string>
using namespace std;
int main(){
    string name;
    cin >> name;
    char start=toupper(name[0]);
    name[0]=start;
    cout << name;
}
