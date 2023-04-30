#include<bits/stdc++.h>

using namespace std;

int main(){
    int n, aux1, aux2, r = 0;
    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> aux1 >> aux2;
        if(aux2 - aux1 >=2){
            r++;
        }
    }
    cout << r << "\n";
    return 0;
}