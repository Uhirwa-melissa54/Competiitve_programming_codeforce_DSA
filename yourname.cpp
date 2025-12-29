#include <bits/stdc++.h>
using namespace std;
void solve(vector<string>answers){
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
        answers.push_back("YES");
    }
    else{
    
    answers.push_back("NO");
    }
    
}
int main(){
    int t;
    cin >> t;
    vector<string>answers;
    while(t > 0){
        solve(answers);
        t--;
    }
    for(int i=0; i < answers.size();i++){
        cout << answers[i]<<"\n";
    }
}
