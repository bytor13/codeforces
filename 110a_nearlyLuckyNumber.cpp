#include<bits/stdc++.h>

using namespace std;

int main(){
    long long n, r=0;
    string aux;
    bool lucky = true;
    cin >> n;
    aux = to_string(n);
    
    for(int i = 0; i < (int) aux.length(); i++){
        // cout << aux[i] << "\n";
        if(aux[i] == '4' or aux[i] == '7'){
            r++;
        }
    }

    aux = to_string(r);
    // cout << r << "\n";

    for(int i = 0; i < (int) aux.length(); i++){
        // cout << aux[i] << "\n";
        if(aux[i] != '4' and aux[i] != '7'){
            lucky = false;
        }
    }
    if(lucky){
        cout << "YES\n";
    }
    else{
        cout << "NO\n";
    }
    return 0;
}   