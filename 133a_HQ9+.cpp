#include<bits/stdc++.h>

using namespace std;

int main(){
    string s;
    bool b = false;
    cin >> s;
    for(int i = 0; i < (int) s.length(); i++){
        if(s[i] == 'Q' or s[i] == 'H' or s[i] == '9'){
            b = true;
            break;
        }
    }
    if(b){
        cout << "YES\n";
    } else{
        cout << "NO\n";
    }
    return 0;
}