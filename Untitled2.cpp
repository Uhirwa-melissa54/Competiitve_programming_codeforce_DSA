#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin >> n;
    map<char,int>m1;
    map<char,int>m2;
    for(int i=0; i < n; i++){
        char a;
        cin >>a;
        m1[a]++;
    }
    for(int i=0; i < n; i++){
        char a;
        cin >>a;
        m2[a]++;
    }
    if(m1==m2){
        cout <<"YES" <<"\n";
    }
    cout <<"NO"<<"\n";
    
}
int main(){
    int t;
    cin >> t;
    while(t > 0){
        solve();
        t--;
    }
}
