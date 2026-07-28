#include <iostream>
#include<vector>
using namespace std;

int main(){
    long long n;
    cin >> n;
    long long sum = 0;
    vector< long long > arr(n-1);
    for(int i = 0; i< n-1;i++){
        cin >> arr[i];
        sum += arr[i];
    }
    long long total = (n*(n+1))/2;
    long long missing = total - sum;
    cout << missing <<endl;
    return 0;
}