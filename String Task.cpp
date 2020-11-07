#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
 
    string s ,s2;
    cin >> s;
    for(int i{0}; i < s.length() ; i++)
        {
            int len = s.at(i);          //This whole function converts uppercase to lowercase
            if(isupper(len))
            {
                s.at(i) = tolower(len);
            }
            if(s.at(i) == 'a' || s.at(i) == 'e' || s.at(i) == 'i' || s.at(i) == 'o' || s.at(i) == 'u' || s.at(i) == 'y')
            {
                continue;
            }else{
                cout << "." << s.at(i);
            }
        }
 
}
