#include<bits/stdc++.h>

using namespace std;

int main(){
    int y;
    bool dif = false;
    string aux;
    cin >> y;
    while(!dif){
        y++;
        dif = true;
        aux = to_string(y);
        for(int i = 0; i < (int) aux.length() - 1; i++){
            for(int j = i+1; j < (int) aux.length(); j++){
                if(aux[i] == aux[j]){
                    dif = false;
                }
            }
        }
    }
    cout << y << "\n";
    return 0;
}