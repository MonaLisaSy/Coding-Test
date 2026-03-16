#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    vector<string> arr(n);
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    long long exp = 0;
    long long total = 0;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < arr[i].length(); j++){
            if(arr[i][j] == 'O'){
                total += (exp += 1);
            } else {
                exp = 0;
            }
        }
        cout << total << '\n';
        total = 0;
        exp = 0;
    }
}