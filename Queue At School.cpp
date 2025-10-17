#include <iostream>
#include <vector>
using namespace std;
int main(){
    int n,t;
    
    cin >> n >> t;
    string s;
    cin >> s;
    vector<char>queue(s.begin(),s.end());

    int j=0;
    while(j < t){
     int i=0;   
   while(i< n-1){
        if(queue[i]=='B' && queue[i+1]=='G'){
            queue[i]='G';
            queue[i+1]='B';
            i+=2;
        }
        else if(queue[i]==queue[i+1] || queue[i]=='G' && queue[i+1]=='B'){
            i++;
            
        }
    }
    j++;
}
for(int i=0; i < n;i++){
    cout<<queue[i];
}

}

