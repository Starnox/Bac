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
    fin >>n;
    int first,second;
    fin >> first;
    int k = 0;
    while(fin >> second)
    {   
        if(first < n)
        {
            if(first != second)
            {
                k++;
                cout << "(" << first <<"," << second << ")" << " ";
                if(k % 5 == 0)
                {
                    cout << '\n';
                }
            }
        }

        first = second;
    }
}