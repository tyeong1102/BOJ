#include <iostream>
#include <string>
using namespace std;

int main(){
    int a[26];
    string s;

    cin >> s;

    for(int i=0; i<26; i++){
        a[i] = -1;
    }
    
    for(int i=0; i<s.length(); i++){
        if(a[(int)s[i]-97] < 0){
            a[(int)s[i]-97] = i;
        }
    }

    for(int i=0; i<26; i++){
        cout << a[i] << " ";
    }
}