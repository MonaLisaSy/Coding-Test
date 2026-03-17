#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int N, T, P;
    cin >> N;
    vector<int> arr(6);
    for(int i = 0; i < 6; i++){
        cin >> arr[i];
    }
    cin >> T >> P;
    int total = 0;
    for(int i = 0; i < 6; i++){
        total += (arr[i]+T-1)/T;
    }
    cout << total << '\n';
    cout << N/P << " " << N%P << '\n';
}