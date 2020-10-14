#include <bits/stdc++.h>

using namespace std;

int main() {
    int n; cin >> n;

    /*

    1 2 3 4 5 6 7
    2 3 4 5 6 7
    3 4 5 6 7
    4 5 6 7
    5 6 7
     6 7
      7              Mid Location
     6 7
    5 6 7
    4 5 6 7
    3 4 5 6 7
    2 3 4 5 6 7
    1 2 3 4 5 6 7


    */

    // outer for loop prints Only first row element each time
    for (int i = 1; i <= n; i++) {
        cout << i << " ";
        // Inner process (i+1) th number .... n
        for (int j = i + 1; j <= n; j++) {
            cout << j << " ";
        }
        // Extra leading spaces count will be i = 1,2,3...n
        // string( count , char type arg )  => prints arg count Times
        cout << "\n" + string(i, ' ');
    }
	
	// removing Some space 
    cout<<"\b\b";
    
    // For After MID Location Just Opposite Approach

    for (int i = n-1; i >= 1; --i) {

        cout << i << " ";
        for (int j = i + 1 ; j <= n; j++) {
            cout << j << " ";
        }

        cout << "\n" + string(i - 1, ' ');
    }




    return 0;
}
