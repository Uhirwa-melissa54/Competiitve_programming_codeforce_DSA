#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    vector<int>numbers;
    vector<string>answers;
    cin >> n;
    for(int i=0 ; i < n; i ++){
        int a;
        cin >> a;
        numbers.push_back(a);
    }
    for(int i=0 ; i < numbers.size(); i++){
        double firstSquareroot=sqrt(numbers[i]);
        if(numbers[i]==4){
            answers.push_back("YES");
            continue;
        }
        if(floor(firstSquareroot)==firstSquareroot&& numbers[i]%2!=0){
            double secondSquareroot=sqrt(firstSquareroot);
            if(floor(secondSquareroot)==secondSquareroot){
                answers.push_back("NO");
            }
            else{
                answers.push_back("YES");
            }
        }
        else{
        answers.push_back("NO");
        }
    }
    for(int i=0; i < answers.size(); i++){
        cout << answers[i];
    }
    
}
