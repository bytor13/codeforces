#include<bits/stdc++.h>

using namespace std;

int main(){
    int x = 97, r = 0;
    int v[26] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
    string s;
    cin >> s;
    for(int i = 0; i < (int) s.length(); i++){
        v[(int) s[i] -97] += 1; 
    }
    
    for(int i = 0; i < 26; i++){
        if(v[i] > 0){
            r += 1;
        }
    } 

    if(r % 2 == 0){
        cout << "CHAT WITH HER!\n";
    }
    else{
        cout << "IGNORE HIM!\n";
    }
    return 0;
}