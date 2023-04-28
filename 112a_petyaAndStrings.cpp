#include<bits/stdc++.h>

using namespace std;

int main(){
    int r = 0;
    string s1, s2;
    char c1, c2;
    cin >> s1;
    cin >> s2;
    for(int i = 0; i < s1.length(); i++){
        c1 = tolower(s1[i]);
        c2 = tolower(s2[i]);
        if(c1 > c2){
            r = 1;
            break;
        } 
        else if(c1 < c2){
            r = -1;
            break;
        }
    }
    cout << r << "\n";
    return 0;
}