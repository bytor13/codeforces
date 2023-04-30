#include<bits/stdc++.h>

using namespace std;

int main(){
    int n, k, aux, a = 0, b = 0;
    cin >> n >> k;
    for(int i = 0; i < n; i++){
        cin >> aux;
        if(aux <= k){
            a++;
        }
        else{
            b++;
        }
    }
    cout << a + 2*b << "\n";
    return 0;
}