#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s, ns;
    cin >> s;
    int l = s.size();
    for(int i{0}; i < l; i++){
        if(s[i] != '+'){
            ns.push_back(s[i]);
        }
    }
    sort(ns.begin(), ns.end());
    cout << ns[0];
    for(int i{1}; i < ns.size(); i++)
        {
            cout << "+" << ns[i];
        }
}
