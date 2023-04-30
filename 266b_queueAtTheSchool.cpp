#include<bits/stdc++.h>

using namespace std;

int main(){
    int n, i;
    string s;
    cin >> n >> i;
    cin >> s;

    while(i > 0){
        for(int j = 0; j < (int) s.length() - 1; j++){
            if(s[j] == 'B' && s[j+1] == 'G'){
                s[j] = 'G';
                s[j+1] = 'B';
                j++;
            }
        }
        i--;
    }
    
    cout << s << "\n";
    return 0;
}