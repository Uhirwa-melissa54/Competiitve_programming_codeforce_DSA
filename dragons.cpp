#include <bits/stdc++.h>
using namespace std;

int main(){
    multimap<int,int> dragons;
    int n, s;
    cin >> s >> n;

    for(int i = 0; i < n; i++){
        int a, b;
        cin >> a >> b;
        dragons.insert({a, b});       }

    for(auto it : dragons){
        int strength = it.first;
        int bonus = it.second;

        if(s <= strength){
            cout << "NO";
            return 0;
        }
        s += bonus;
    }

    cout << "YES";
    return 0;
}

