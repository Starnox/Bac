//#pragma GCC optimize ("O3")
//#pragma GCC target ("sse4")

#include <bits/stdc++.h>

using namespace std;

ifstream fin("bac.in");

static const int NMAX = 1e4+5;


int main()
{
    int first,second;
    fin >> first;
    int maxi = -1;
    memset(fv,0,sizeof(fv));
    int k = 1;
    int sol, sol_curenta;
    while(fin >> second)
    {
        if(second - first == k)
        {
            if(k == 1)
            {
                sol_curenta = first;
            }
            k++;
            
            if(k > maxi)
            {
                maxi = k;
                sol = sol_curenta;
            }
        }
        else
        {
            k = 1;
        }
        first = second;
    }
    for(int i = 0; i< maxi; ++i)
    {
        cout << sol+i << " ";
        sol+=i;
    }
    return 0;
}