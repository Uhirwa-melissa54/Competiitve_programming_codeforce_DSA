#include <iostream>
#include <iomanip>
using namespace std;
int main(){
    int n;
    cin >> n;
    double portionOfOrange=0;
    for(int i=0; i < n;i++){
        double a;
        cin >> a;
        portionOfOrange+=(a/n);
        
    }
    cout <<fixed << setprecision(12) << portionOfOrange;
    
}
