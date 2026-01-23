#include <bits/stdc++.h>
using namespace std;

int solve(int x, vector<int>& v1, vector<int>& value){
    if(x < 0) return -1e9; 
    if(x == 0) return 0;   
    if(value[x] != -1) return value[x]; 

    int best = -1e9;
    for(int c : v1){
        best = max(best, solve(x - c, v1, value) + 1);
    }
    return value[x] = best;
}

int main(){
    vector<int> v1;
    int x, a, b, c;
    cin >> x;
    cin >> a >> b >> c;

    v1.push_back(a);
    v1.push_back(b);
    v1.push_back(c);

    vector<int> value(x + 1, -1); 
    int ans = solve(x, v1, value);
    cout << ans << endl;
}

