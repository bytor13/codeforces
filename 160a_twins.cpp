#include<bits/stdc++.h>

using namespace std;

int main(){
    int n, s1 = 0, s2 = 0, aux, c = 0;
    vector<int> v;
    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> aux;
        s1 += aux;
        v.push_back(aux);
    }

    sort(v.begin(), v.end(), greater<int>());

    // cout << "s2 = " << s2 << " s1 = " << s1 << " c = " << c << "\n";
    for(int i = 0; i < n; i++){
        s2 += v[i];
        s1 -= v[i];
        c++;
        // cout << "s2 = " << s2 << " s1 = " << s1 << " c = " << c << "\n";
        if(s2 > s1){
            break;
        }
    }

    cout << c << "\n";
    return 0;
}