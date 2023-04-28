#include<bits/stdc++.h>

using namespace std;

int main(){
    int n, x = 0;
    string aux;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> aux;
        if(aux[1] == '+'){
            x++;
        }
        else{
            x--;
        }
    }
    cout << x << "\n";
    return 0;
}