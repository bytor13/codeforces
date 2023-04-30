#include<bits/stdc++.h>

using namespace std;

int main(){
    int n, aux;
    bool b = false;
    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> aux;
        if(aux == 1){
            b = true;
        }
    }
    if(b){
        cout << "HARD\n";
    }
    else{
        cout << "EASY\n";
    }
    return 0;
}