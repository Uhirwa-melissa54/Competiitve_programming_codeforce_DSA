#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector<int>results;
    int n;
    cin >> n;
    for(int i=0 ; i < n; i++){
        
            int a,b,c;
            cin >> a >> b>> c;
            if(a==b){
                results.push_back(c);
            }
            if(a==c){
                results.push_back(b);
            }
            if(b==c){
                results.push_back(a);
            }
        
    }
    for(int i=0; i <results.size();i++){
        cout << results[i];
    }
}
