#include<bits/stdc++.h>

using namespace std;

int main(){
    int x, r=0;
    cin >> x;
    for(int i = 5; i > 0; i--){
        r += x / i;
        x = x % i;
    }
    cout << r << "\n";
    return 0;

}