#include<bits/stdc++.h>

using namespace std;;

int main(){
    long long n, k, p = 1;
    bool b = false;
    cin >> n >> k;

    if(n % 2 == 0){
        if(k < n / 2+1){    
            cout << 2*(k-1)+1 << "\n";
        }
        else{
            cout << (k - n / 2)*2 << "\n";
        }
    }
    else{
        if(k < n / 2 + 2){
            cout << 2*(k-1)+1 << "\n";
        }
        else{
            cout << (k - n / 2-1)*2 << "\n";
        }
    }   
    return 0;
}