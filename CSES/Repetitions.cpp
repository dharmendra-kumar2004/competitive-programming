#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;
    long long n = s.length();
    long long ans = 1;
    long long maxans = 1;
    for(int i = 1; i<n;i++){
        if(s[i] == s[i-1]){
            ans += 1;
            maxans = max(maxans,ans);
        }
        else{
            ans = 1;
        }
    }
    cout << maxans << endl;
    return 0;
}