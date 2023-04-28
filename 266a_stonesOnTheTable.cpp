    #include<bits/stdc++.h>
     
    using namespace std;
     
    int main(){
        int n, r = 0;
        string s;
        cin >> n;
        cin >> s;
     
        char a = s[0];
        for(int i = 1; i < n; i++){
            while(a == s[i]){
                r++;
                i++;
            }
            a = s[i];
        }
        cout << r << "\n";
        return 0;
    }