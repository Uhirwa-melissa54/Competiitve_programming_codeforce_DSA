#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    int d=t;
    vector<string>answers;
    while(t > 0){
        int n;
        cin >> n;
        vector<string>v1;
        for(int i=0; i < n; i++){
            string word;
            cin >> word;
            v1.push_back(word);
        }
        string final=v1[0];
        cout << final;
        for(int i=1; i < v1.size(); i++){
            string string1=final+v1[i];
            string string2=v1[i]+final;
            if(string1 < string2){
                final=string1;
                
            }
            else{
                final=string2;
            }
            
        }
        answers.push_back(final);
        t--;
    }
    for(int i=0; i < d; i++){
        cout <<answers[i];
    }
}
