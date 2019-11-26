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
char s1[105];
char s2[105];
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
	cin.getline(s1,sizeof(s1));
	cin.getline(s2,sizeof(s2));

	int i =0,j=0;
	int n = (int) strlen(s1);
	int m = (int) strlen(s2);
	while(i<n&&j<m)
	{
		if(s1[i] == s2[j])
		{
			i++;
		}
		j++;
	}
	if(i == n)
		cout << "DA";
	else
	{
		cout << "NU";
	}
	
	
    return 0;
}