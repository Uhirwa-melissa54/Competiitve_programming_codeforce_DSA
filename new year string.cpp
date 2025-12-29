#include <bits/stdc++.h>
using namespace std;
bool check2025(string s,int n){
	 for(int i=0;i+3 < n;i++){
        	
	if((s.substr(i,4))=="2025"){
		return true;
	}
        	
}

	return false;

    }
bool check2026(string s,int n){
	 for(int i=0;i+3 < n;i++){
        	
	if(s.substr(i,4)=="2026"){
		return true;
	}
        	
}

	return false;

    }
	

int main(){
    int t;
    cin >> t;
    vector<int>answers;
    while (t > 0){
        int n;
        cin>> n;
        string year;
        cin >> year;
        bool answer1=check2025(year,n);
        bool answer2=check2026(year,n);
        if(answer1==true && answer2==false){
        	answers.push_back(1);
		}
        
        else{
        	answers.push_back(0);
		}
     t--;  
    
}
for(int i=0; i < answers.size(); i++){
	cout << answers[i];
}
}
