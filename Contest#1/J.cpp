#include <bits/stdc++.h>
using namespace std;
int main (){
    int n;
    cin >> n;
    string arr[n][n];
    string f1;
    string f2 = "";
    for (int r = 0; r < n; r++) {
        for (int c = 0; c < n; c++) {
            cin >> arr[r][c];
            if (r == n / 2)
                f2 += arr[r][c];
            if (c == n / 2)
                f1 += arr[r][c];
        }
    }
    cout << "The password is : " << (f2 + f1);
}