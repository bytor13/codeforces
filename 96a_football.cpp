#include<bits/stdc++.h>

using namespace std;

int main(){
    int x = 1;
    string s;
    cin >> s;

    for(int i = 0; i < (int) s.length(); i++){
        if(s[i] == s[i+1]){
            x++;
            if(x == 7){
                break;
            }
        }else{
            x = 1; 
        }
    }
    if(x == 7){
        cout << "YES\n";
    }
    else{
        cout << "NO\n";
    }
    return 0;
}