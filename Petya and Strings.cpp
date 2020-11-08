#include <bits/stdc++.h>
using namespace std;
int main()
{
    string sa, sb;
    cin >> sa >> sb;
    for(int i{0}; i < sa.length(); i++){
        int l1 = sa.at(i);
        int l2 = sb.at(i);
        if(isupper(l1) || isupper(l2)){
            sa.at(i) = tolower(l1);
            sb.at(i) = tolower(l2);
        }
    }

    if(sa == sb){
        cout << "0" ;
    }else if(sa < sb){
        cout << "-1" ;
    }else{
        cout << "1" ;
    }
    return 0;
}
