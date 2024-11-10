#include <iostream>
#include <cctype>
 
using namespace std;
 
int main() {
    int n;
    string s;
    cin>>n>>s;
    
    int counting['z' + 1] = {0};
    
    for(char c: s) {
        char ch = tolower(c);
        if(counting[ch]==0)counting[ch]++;
    }
    int c = 0;
    for(int i = 'a'; i <= 'z'; i++) {
        if(counting[i] != 0)c++;
    }
    if(c == 26) {
        cout << "YES"<<endl;
    } else {
        cout<<"NO"<<endl;
    }
   return 0;
}
