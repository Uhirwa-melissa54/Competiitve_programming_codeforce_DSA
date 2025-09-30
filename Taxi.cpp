#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector<int>threes;
    vector<int>ones;
    vector<int>twos;
    vector<int>fours;
    int decrease=0;
    int numberOfTaxi;
    cin >> numberOfTaxi;
    for(int i=0;  i < numberOfTaxi; i++){
        int member;
        cin >> member;
        if(member==3){
            threes.push_back(member);
            
        }
        if(member==1){
            ones.push_back(member);
        }
        if(member==2){
            twos.push_back(member);
        }
        if(member==4){
            fours.push_back(member);
        }
    }
    int threeSize=threes.size();
    int twoSize=twos.size();
    int oneSize=ones.size();
    if(threeSize  < oneSize && threeSize!=0){
        decrease=threeSize;
        oneSize-=threeSize;
        threeSize-=threeSize;
    }
    if(threeSize > oneSize && threeSize!=0 && oneSize !=0){
        decrease=oneSize;
        threeSize-=oneSize;
        oneSize-=oneSize;
       
    }
    if(threeSize ==oneSize){
        decrease=threeSize;
        threeSize-=threeSize;
        oneSize-=oneSize;
    }
    if(twoSize %2==0){
        decrease+=(twoSize/2);
        twoSize-=twoSize;
    }
   if(twoSize%2!=0){
        decrease+=(twoSize/2);
        twoSize=1;
       
   } 
   if(twoSize==1 && oneSize >=2){
       decrease+=1;
       oneSize-=2;
       twoSize-=twoSize;
   }if(twoSize==1 && oneSize ==1){
       decrease+=1;
       oneSize-=1;
       twoSize-=twoSize;
       
   }
   if(oneSize >=4){
       if(oneSize % 4==0){
       decrease+=(oneSize/4);
       oneSize-=oneSize;
       }
       if(oneSize %4!=0){
           decrease+=(oneSize/4);
           oneSize=oneSize%4;
           
       }
   }
   if(oneSize<4&&oneSize!=0){
       decrease+=1;
       oneSize-=oneSize;
        
   }
   int n=fours.size()+threeSize+twoSize+oneSize+decrease;
 
   cout << n;

}
