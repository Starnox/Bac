//#pragma GCC optimize ("O3")
//#pragma GCC target ("sse4")

#include <bits/stdc++.h>

using namespace std;

ifstream fin("bac.in");

static const int NMAX = 1e4+5;


int main()
{
    int x;
    int ct =0;
    int maxi = -1;
    while(fin >> x)
    {
        if(x%2 ==0){
            ct++;
            maxi = max(maxi, ct);
        }
        else
        {
            ct =0;   
        }
    }    
    cout << maxi;
    
    return 0;
}