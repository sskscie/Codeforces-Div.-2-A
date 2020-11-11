#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n ,counter{0}, bSum{0}, osum{0};
    cin >> n;
    int a[n];
    for(int i{0}; i < n ; i++)
        {
            cin >> a[i];
            bSum += a[i];
        }
    sort(a , a+n , greater<int>()); // this sorts the array in decreasing order.
    bSum /= 2;
    for(int i{0}; i < n; i++){
        osum += a[i];
        counter++;
        if(osum > bSum){
            break;
        }
    }

    cout << counter << endl;
    return 0;
}
