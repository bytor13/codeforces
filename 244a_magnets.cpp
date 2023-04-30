#include<bits/stdc++.h>

using namespace std;

int main(){
    int n, aux1, aux2, r = 0;
    vector<int> v;
    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> aux1;
        if(i == 0 or aux1 != aux2){
            r++;
        }
        aux2 = aux1;
    }
    cout << r << "\n";
    return 0;
}