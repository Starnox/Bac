//#pragma GCC optimize ("O3")
//#pragma GCC target ("sse4")

#include <bits/stdc++.h>

using namespace std;

ifstream fin("bac.in");

static const int NMAX = 1e4+5;

int fv[10];
string stelute[10];
int main()
{
    int n;
    fin >> n;
    for(int i =1; i<=n; ++i)
    {
        int x; fin >> x;
        fv[x]++;
        stelute[x]+="*";
    }
    for(int i = 9; i >=0; --i)
    {
        if(fv[i] > 0)
        {
            cout << i << stelute[i];
        }
    }
    return 0;
}