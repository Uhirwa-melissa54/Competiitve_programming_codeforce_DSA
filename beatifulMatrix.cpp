#include <bits/stdc++.h>
using namespace std;
int main(){
    int rows=5;
    int columns=5;
    int rowPosition;
    int columnPosition;
    for(int i=1; i < 6; i++){
        for(int j=1; j < 6; j++){
            int a;
            cin >> a;
            if(a==1){
                rowPosition=i;
                columnPosition=j;
                
                
            }
        }
    }
    int rowMovements=abs(rowPosition-3);
    int columnMovements=abs(columnPosition-3);
    int movements=rowMovements+columnMovements;
    cout << movements;
}
