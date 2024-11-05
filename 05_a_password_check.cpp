#include <iostream>
#include <string>

using namespace std;

int main() {
    string s;
    cin>>s;
    bool isMinCh = s.size() >=5;
    int uperLC = 0, lowerLC = 0, digitC = 0;
    
    if(isMinCh) {
            for(char c: s) {
                if(isupper(c))uperLC++;
                if(islower(c))lowerLC++;
                if(isdigit(c))digitC++;
            }
    }

if(isMinCh && uperLC && lowerLC && digitC) {
    cout << "Correct" << endl;
}else {
    cout << "Too weak"<<endl;
}
    
    return 0;
}
