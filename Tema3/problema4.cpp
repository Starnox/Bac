//#pragma GCC optimize ("O3")
//#pragma GCC target ("sse4")

#include <bits/stdc++.h>

using namespace std;

ifstream fin("bac.in");

static const int NMAX = 1e4+5;

int fv[6];
int ind[6];
int main()
{
    int x;
    
    ind[1] = 1; ind[2] = 2; ind[3] = 3; ind[4] = 4; ind[5] =5;
    while(fin >> x)
    {
        fv[x]++;
    }

    for(int i =1; i<5; ++i)
    {
        for(int j =i+1; j <=5;++j)
        {
            if(fv[ind[i]] < fv[ind[j]])
            {
                swap(ind[i],ind[j]);
            }
        }
    }
    for(int i = 1; i<=5; ++i)
    {
        cout << ind[i] << " " <<fv[ind[i]] << "\n\n";
    }

    return 0;
}