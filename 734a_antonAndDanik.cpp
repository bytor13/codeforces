#include<bits/stdc++.h>

using namespace std;

int main(){
    int n, a = 0, d = 0;
    string s;
    cin >> n;
    cin >> s;
    for(int i = 0; i < (int) s.length(); i++){
        if(s[i] == 'A'){
            a++;
        }
        else{
            d++;
        }
    }
    if(a > d){
        cout << "Anton\n";
    }
    else if(a < d){
        cout << "Danik\n";
    }
    else{
        cout << "Friendship\n";
    }

    return 0;
}