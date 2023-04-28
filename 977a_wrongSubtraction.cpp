#include<bits/stdc++.h>

using namespace std;

int main(){
    int n, k;
    string aux;
    cin >> n >> k;

    for(int i = 0; i < k; i++){
        aux = to_string(n); 
        if(aux[aux.length()-1] == '0'){
            n /= 10; 
        }else{
            n -= 1;
        }
    }

    cout << n << "\n";
    return 0;
}