#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int x, y, i, j, ans, arr[5][5];
    for(i = 0; i < 5 ; i++){
        for(j = 0; j < 5 ; j++){
            cin >> arr[i][j];
        }
    }

    for(i = 0; i < 5 ; i++){
        for(j = 0; j < 5 ; j++){
            if(arr[i][j] == 1){
                x = i;          //==>  this tells the code where in the matrix 1 is located;
                y = j;
            }
        }
    }

    ans = abs(x-2) + abs(y-2); i subtracted 2 from x and y because that is the preferred location where we want to put the 1 . subtracting from mid position will give correct number of steps to make a matrix beautiful.
    cout << ans << "\n";

    return 0;
}
