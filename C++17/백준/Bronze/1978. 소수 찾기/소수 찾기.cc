#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int N, temp;
    int count = 0;
    cin >> N;
    while(N--){
        cin >> temp;
        if(temp < 2) continue;
        bool isprime = true;
        for(int i = 2; i < temp; i++){
            if(temp % i == 0){
                isprime = false;
                break;
            }
        }
        if(isprime) count++;
    }
    cout << count << '\n';
}