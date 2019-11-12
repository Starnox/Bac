//#pragma GCC optimize ("O3")
//#pragma GCC target ("sse4")

#include <bits/stdc++.h>

using namespace std;

ifstream fin("bac.in");

static const int NMAX = 1e4+5;

int fv1[100];
int fv2[100];
int main()
{
    

    int x;
    while(fin >> x)
    {
        fv1[x]++;
        fv2[100-x]++;
    }
    for(int i =1; i<= 99; ++i)
    {
        if(fv1[i] == 0 && fv2[i] == 1)
        {
            cout << i;
            break;
        }
    }
    return 0;
}