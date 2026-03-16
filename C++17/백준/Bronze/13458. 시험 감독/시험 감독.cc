#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, a, b, c;
    cin >> n;
    long long ans = 0;
    int* arr = new int[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    cin >> b >> c;
    for(int i = 0; i < n; i++){
        arr[i] -= b;
        if(arr[i] <= 0){
            ans++;
        } else {
            ans++;
            ans += (arr[i] / c);
            if(arr[i]%c != 0){ // 나머지가 있다면
                ans++;
            }
        }
    }
    cout << ans;
}