#include<bits/stdc++.h>

using namespace std;

int main(){
    string s1, s2;
    bool b = true;
    cin >> s1;
    cin >> s2;

    for(int i = 0; i < (int) s1.length(); i++){
        if(s1[i] != s2[s2.length()-1-i]){
            b = false;
            break;
        }
    }

    if(b){
        cout << "YES\n";
    }
    else{
        cout << "NO\n";
    }
    return 0;
}