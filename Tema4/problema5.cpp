//#pragma GCC optimize ("O3")
//#pragma GCC target ("sse4")

#include <bits/stdc++.h>
#include <cstring>
using namespace std;

// CHECK THE LIMITS
typedef long long ll;

static const int NMAX = 1e5;

int gcd(int a, int b) {
  return b ? gcd(b, a%b) : a;
} 
char s[105];
char first[105];
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
	int n;
	int k= 0;
	cin >> n;
	cin >> first;
	cin.get();
	for(int i = 0; i < n-1; ++i)
	{
		cin >> s;
		cin.get();
		if(strstr(s,first) != NULL)
		{
			k++;
		}
	}
	cout << k;
    return 0;
}