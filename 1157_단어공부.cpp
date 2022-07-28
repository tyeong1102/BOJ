#include <iostream>
#include <string>
using namespace std;

int main(){
    int arr[26] = {};
    int cnt = 0;
    string s;
    cin >> s;

    for(int i=0; i<s.size(); i++){
        if(s[i] < 97){
            arr[s[i]-65]++;
        } else{
            arr[s[i]-97]++;
        }
    }

    int max = 0;
    int maxIndex = 0;

    for(int i=0; i<26; i++){
        if(max<arr[i]){
            max = arr[i];
            maxIndex = i;
        }
    }

    for(int i=0; i<26; i++){
        if(max == arr[i]){
            cnt++;
        }
    }

    if(cnt > 1){
        cout << "?" << '\n';
    } else{
        cout << (char)(maxIndex+65) << '\n';
    }
}