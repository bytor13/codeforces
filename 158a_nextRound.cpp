#include<bits/stdc++.h>

using namespace std;

int main(){
    int n, k, p, r = 0, aux;
    cin >> n >> k;
    for(int i = 0; i < n; i++){
        cin >> aux;
        if(aux > 0){
            if(i < k -1){
                r++;
            }
            else if(i == k-1){
                p = aux;
                r++;
            } 
            else{
                if(p == aux){
                    r++;
                }
            }
        }
    }
    cout << r << "\n";
    return 0;
}