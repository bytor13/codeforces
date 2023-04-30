#include<bits/stdc++.h>

using namespace std;

int main(){
    int n, in, out, p = 0, m = -1;
    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> out >> in;
        p += in;
        p -= out;
        if(m == -1 or p > m){
            m = p;
        }
    }
    cout << m << "\n";
    return 0;
}