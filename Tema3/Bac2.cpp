//#pragma GCC optimize ("O3")
//#pragma GCC target ("sse4")

#include <bits/stdc++.h>

using namespace std;


int solve_quadratic(int n)
{
    return (-1 + sqrt(1 + 8*n)) / 2;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n; cin >> n;
    int x = solve_quadratic(n);
    if((x*(x+1))/2 < n)
    {
        x++;
    }
    cout << x - ((x*(x+1))/2 - n);

    return 0;
}