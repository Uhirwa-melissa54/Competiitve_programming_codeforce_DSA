#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, k;
    vector<int>freeDays;
    vector<int>sumMinimum;
    cin >> n >> k;
    for(int i=0; i < n; i++){
        int a;
        cin >> a;
        freeDays.push_back(a);
    }
    int i=0;
   while(i +1< freeDays.size()){
       int sumAlone=1+k;
       int sumAlone2=1+k;
       int sumTogether=sumAlone+ sumAlone2;
       int sumPaired=(freeDays[i+1] - freeDays[i])+1+k;
       if(sumTogether > sumPaired){
           sumMinimum.push_back(sumPaired);
           i+=2;
       }
       else{
           sumMinimum.push_back(sumAlone);
           i++;
       }
       }
       if(i+1 == freeDays.size()){
           int final=k+1;
           sumMinimum.push_back(final);
       }
       int sum=0;
       for(int i=0; i < sumMinimum.size(); i++){
           sum+=sumMinimum[i];
       }
       cout << sum;
    
    
}
