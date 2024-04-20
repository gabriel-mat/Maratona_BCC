#include <bits/stdc++.h>
using namespace std;

/*

The first row and the first column contain ones, that is: (ai, 1)  =  (a1, i)  =  1 for all i = 1, 2, ..., n.

Each of the remaining numbers in the table is equal to the sum of the number above it and the number to the left of it. 
In other words, the remaining elements are defined by the formula (ai, j ) = ( ai - 1, j)  +  (ai, j - 1).

You are given a number n. You need to determine the maximum value in the n × n table defined by the rules above.

*/

int main(){
    int n;
    cin >> n;

    int matriz[n][n];

    for(int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if(i == 0 || j == 0)
            {
                matriz[i][j] = 1;
            }
        }
    }

    for(int i = 1; i < n; i++)
    {
        for (int j = 1; j < n; j++)
        {
            matriz[i][j] = matriz[i-1][j] + matriz[i][j-1];
        }
    }

    cout << matriz[n-1][n-1];

    return 0;
}