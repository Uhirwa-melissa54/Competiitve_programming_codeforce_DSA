// Online C++ compiler to run C++ program online
#include <iostream>
#include <vector>
#include <string>
#include <cctype>
#include <algorithm>

using namespace std;

int main() {
    vector<char>letters;
   string name;
   cin >> name;
   transform(name.begin(), name.end(), name.begin(), ::tolower);
   for(int i=0; i < name.size(); i++){
       if(name[i]!='a' && name[i]!='e' && name[i]!='u' && name[i]!='i' && name[i]!='o' && name[i]!='e' && name[i]!='y'){
       letters.push_back(name[i]);
   }
   }
   for(int i=0; i < letters.size(); i++){
       cout <<"."<<letters[i];
   }

    return 0;
}
