/* This question language was so hard that it took me 2 days to just understand the language of the question 
but that was not the real problem writing the code for it was a real pain in the ass(I still didn't knew STL at this time so it was hard for me).
Nevertheless I found an angel on the interwebs that solved the question without using the STL. 
So here is the solution*/

/*The input of the question gives who gave gift to whom like in the first test case [2,3,4,1] friend no. = 2 gave gift to friend no. = 1 and friend no. = 3 gave gift to friend no. 2 and so on.
And the question ask us to tell friend no 1 gave gift to which friend no. like in the above case friend no. gave the gift to friend no. = 4 and so on.*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int aa[110], ab[n];
    for(int i{0}; i < n ; i++){
        cin >> ab[i];
    }
    for(int i{0}; i < n ; i++){ // <== this is the heart of the problem it maps who gave gift to whom. without actually using maps.
        aa[ab[i]] = i+1;
    }
    for(int i{1}; i <= n; i++){
        cout << aa[i] << " " ;
    }

    return 0;
}
