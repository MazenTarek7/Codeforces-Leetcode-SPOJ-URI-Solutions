#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    for (int i = 1 ; i <= n ; i++){
            char b = i + 64;
            cout << b;
        for (int j = i+1 ; j <= n ; j++){
            char a = j + 64;
            cout << a;
        }
        cout << endl;
    }
return 0;
}
