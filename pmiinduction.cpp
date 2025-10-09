#include <iostream>
using namespace std;
	int pmi(int n){
		if(n==1|| n==0){
			return n;
		}
		else{
			return n+pmi(n-1);;
		}
	}
int main(){
	int n;
	cin >> n;
	int answer=pmi(n);
	cout <<"Normal answer"<<answer <<endl;
	int answerByformula=n*(n+1)/2;
	cout <<"Answer By formula"<<answerByformula;

}
