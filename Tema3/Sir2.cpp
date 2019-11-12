//#pragma GCC optimize ("O3")
//#pragma GCC target ("sse4")

#include <bits/stdc++.h>

using namespace std;


int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
    int x = (int) sqrt(n);
    if(x != (float) sqrt(n))
    {
        x++;
    }
    int dif = x*x-n;
    if(dif <= (x*2-1)/2)
    {
        cout << x;
    }
    else
    {
        cout<< (x*2-1) -  dif;
    }
    
    return 0;
}