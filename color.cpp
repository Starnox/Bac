//#pragma GCC optimize ("O3")
//#pragma GCC target ("sse4")

#include <bits/stdc++.h>

using namespace std;

ifstream fin("color2.in");
ofstream fout("color2.out");

static const int NMAX = 16005;

vector<int> v[NMAX];
vector<bool> visited;

int in[NMAX];
int out[NMAX];

void dfs1(int u)
{
    visited[u] =true;

    
    for(auto &child : v[u])
    {
        if(!visited[child])
        {
            dfs1(child);
            
            if(in[child] == 0)
                in[child] = 1;
            
            if(in[child] == 1)
                in[u] = -1;
            
            
        }
    }

}

void dfs2(int u,int parent)
{
    visited[u] = true;

    for(int i = 0; i< (int) v[u].size(); ++i)
    {
        int child = v[u][i];
        if(!visited[child])
        {
            out[child] = -1;
            // get the other child
            int other_child;
            for(int j = 0; j < (int) v[u].size(); ++j)
            {
                if(abs(v[u][j]-v[u][i]) == 1 && v[u][j]!=child)
                    other_child = v[u][j];
            }

            if(out[parent] == 1 || in[other_child] == 1)
            {
                out[child] = 1;
            }
            
            
            dfs2(child,u);
        }
    }
}



int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n;
    fin >> n;
    visited.resize(n+1);
    for(int i=1; i<n ;++i)
    {
        int x,y;
        fin >> x >> y;
        v[x].push_back(y);
        v[y].push_back(x);
    }
    dfs1(1);
    in[1]=1;
    out[1] = 1;
    for(auto &child : v[1])
    {
        if(in[child] == 1){
            in[child] = -1;
            break;
        }
    }
    visited.clear();
    visited.resize(n+1);
    dfs2(1,0);

    vector<int> sol;
    for(int i = 1; i<=n; ++i)
    {
        if(in[i] == 1 && out[i] == 1)
        {
            sol.push_back(i);
        }
    }
    fout << (int) sol.size() << '\n';
    for(auto &it : sol)
    {
        fout << it << " ";
    }

    return 0;
}