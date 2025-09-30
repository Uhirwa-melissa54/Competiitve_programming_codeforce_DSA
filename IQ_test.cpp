#include <iostream>
#include <vector>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector<int>even;
    vector<int>odd;
    
    for(int i=0; i < n; i++){
        int member;
        cin >>member;
        if(member%2==0){
            even.push_back(i+1);
            
        }
        if(member %2!=0){
            odd.push_back(i+1);
        }
        
    }
    if(even.size()==1){
        cout << even[0];
    }
    if(odd.size()==1){
        cout << odd[0];
        
    }
    
}
