#include <bits/stdc++.h>
using namespace std;
int main(){
    int a,b,c;
    vector<int>possibleAnswers;
    cin >> a >> b >> c;
    int maximumA=c/a;
    int maximumB=b/a;
    int answer1=maximumA*a;
    int answer2=maximumB*b;
    possibleAnswers.push_back(answer1);
    possibleAnswers.push_back(answer2);
    for(int i=1; i < maximumA;i++){
        int remaining=c-(a*i);
        int maximumRemaining=remaining/b;
        int amount=maximumRemaining*b;
        int possibleAnswer=(a*i)+amount;
        possibleAnswers.push_back(possibleAnswer);
        
    }
     for(int i=1; i < maximumB;i++){
        int remaining=c-(b*i);
        int maximumRemaining=remaining/a;
        int amount=maximumRemaining*a;
        int possibleAnswer=(b*i)+amount;
        possibleAnswers.push_back(possibleAnswer);
        
    }
    sort(possibleAnswers.begin(),possibleAnswers.end());
    int f=possibleAnswers.size();
    cout << possibleAnswers[f-1];
    
    
    
}
