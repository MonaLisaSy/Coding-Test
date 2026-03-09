#include <iostream>
using namespace std;


int main() {
    int *num = new int[8];
    bool asc = true;
    bool desc = true;
    for(int i = 0; i < 8; i++){
        cin >> num[i];
    }

    for(int i = 0; i < 7; i++){
        if(num[i] < num[i+1]) desc = false;
        if(num[i] > num[i+1]) asc = false;
    }

    if(asc) cout << "ascending";
    else if(desc) cout << "descending";
    else cout << "mixed";
    
    
}