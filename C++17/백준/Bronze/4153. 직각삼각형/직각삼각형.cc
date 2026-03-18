#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int a, b, c;
    while(true){
        cin >> a >> b >> c;
        if(a==0 && b==0 && c==0) break;
        int arr[] = {a,b,c};
        sort(&arr[0], &arr[3]);
        if(a==0 || b==0 || c==0){
            cout << "wrong" << '\n';
        }else if(arr[0]*arr[0]+arr[1]*arr[1] == arr[2]*arr[2]){
            cout << "right" << '\n';
        } else {
            cout << "wrong" << '\n';
        }
    }
    
}