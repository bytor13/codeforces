#include<bits/stdc++.h>

using namespace std;

int main(){
    int x=0, y=0;
    string s1, s2="";
    cin >> s1;
    for(int i = 0; i < (int) s1.length(); i++){
        s2 += toupper(s1[i]);
        if((int) s1[i] < 97){
            x++;
            s1[i] = tolower(s1[i]);
        }
        else{
            y++;
        }
    }
    if(x > y){
        cout << s2 << "\n";
    }
    else{
        cout << s1 << "\n";
    }


    return 0;
}