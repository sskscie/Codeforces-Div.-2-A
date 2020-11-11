#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s, sa{"hello"};
    int j{0}, pass{0};
    cin >> s;
    int l = s.size();
    for(int i{0}; i < l; i++){
        if(s[i] == sa[j]){
            j++;
            pass++;
        }
        if(pass == 5){
            break;

    }

    }
    if(pass == 5){
        cout << "YES" << endl;
    }else{
        cout << "NO" << endl;
    }
    return 0;
}
