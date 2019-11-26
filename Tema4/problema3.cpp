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
char s[25][25];
char first[405];
char second[405];
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

	int n,k;
	cin >> n;
	for(int i =0; i < n; ++i)
	{
		cin >> s[i];
		cin.get();
		
		
	}
	cin >> k;
	for(int i = 0; i< n; ++i)
	{
		if(strlen(s[i]) == k)
		{
			strcat(first,s[i]);
			strcat(first," ");
		}
		else
		{
			strcat(second,s[i]);
			strcat(second," ");
		}
	}
	strcat(first,second);
	cout << first;
    return 0;
}