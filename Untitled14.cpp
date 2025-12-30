// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    int d=t;
    vector<string>answers;
    while(t>0){
        int n;
        vector<string> words;
        deque<string>deque1;
        cin >> n;
        for(int i=0; i < n; i++){
            string word;
            cin >> word;
            words.push_back(word);
        }
        string firstString=words[0];
        deque1.push_back(firstString);
        for(int i =1; i < n; i++){
            int answer=firstString.compare(words[i]);
            if(answer >= 0){
                deque1.push_front(words[i]);
                firstString=words[i];
            }
            else{
                deque1.push_back(words[i]);
            }
        }
        string a;
        for(int i =0; i < n; i++){
           
            a+=deque1[i];
            
        }
      answers.push_back(a);
        t--;
    }
    for(int i=0; i < d; i++){
        cout <<answers[i]<<"\n";
    }
}

