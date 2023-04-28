#include<bits/stdc++.h>

using namespace std;

int main(){
    int k, n, w, r=0;
    cin >> k >> n >> w;
    for(int i = 1; i < w+1; i++){
        r += k*i;
    }
    if(r - n < 0){
        cout << "0\n";
    }
    else{
        cout << r - n << "\n";
    }
    return 0;
}