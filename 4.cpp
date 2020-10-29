#include<bits/stdc++.h>
using namespace std;
int main (){
    int n;
    cin >> n;
    for (int i = 0 ; i < n; i++){
            string word;
            cin >> word;
            int size = word.size();
        for (int j = 0 ; j < size/2 ; j+=2){
            cout << word[j];
        }
        cout << endl;
    }
return 0;
}
