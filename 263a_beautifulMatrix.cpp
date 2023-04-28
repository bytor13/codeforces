#include<bits/stdc++.h>

using namespace std;

int main(){
    int a;
    pair<int, int> p;
    for(int i = 0; i < 25; i++){
        cin >> a;
        if(a == 1){
            p = make_pair(i / 5, i % 5); 
        }
    }
    cout << abs(2 - p.first) + abs(2 - p.second); 
    return 0;
}