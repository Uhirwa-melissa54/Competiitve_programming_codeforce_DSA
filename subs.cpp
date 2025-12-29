#include <bits/stdc++.h>
using namespace std;
bool check2026(vector<char>s){
	auto it=find(s.begin(),s.end(),6);
	int index6=-1;
	if(it!=s.end() ){
	index6= distance(s.begin(),it);
		
	}
	else{
		index6=-1;
	}
	if(index6!=-1 && index6 < 3&& s[index6-1]=='2' && s[index6-2]=='0' && s[index6-3]=='2'){
		return true;
	}
	else{
		return false;
	}
}
bool check2025(vector<char>s){
	auto it=find(s.begin(),s.end(),5);
		int index6=-1;
	if(it!=s.end() ){
	index6= distance(s.begin(),it);
		
	}
	else{
		index6=-1;
	}
	if(index6!=-1 && index6 < 3 && s[index6-1]=='2' && s[index6-2]=='0' && s[index6-3]=='2'){
		return true;
	}
	else{
		return false;
	}

}
int main(){
    vector<int>answers;
    int t;
    cin >> t;
    while(t>0){
	int n;
	cin >>n;
	vector<char>s;
	for(int i=0; i < n; i++){
	    char a;
	    cin >> a;
	    s.push_back(a);
	}
	bool answer1=check2026(s);
	bool answer2=check2025(s);
	if(answer1!=true && answer2){
		answers.push_back(1);
	}
	else{
	answers.push_back(0);
		
	}
	t--;
    }
    for(int i=0; i  < answers.size(); i++){
        cout << answers[i];
    }
	
	
}
