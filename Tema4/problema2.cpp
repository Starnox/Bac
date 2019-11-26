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


	int fv1[26];
	int fv2[26];
	for(int i = 0; i < 26; ++i)
	{
		fv1[i] = 0;
		fv2[i] = 0;
	}
	
	for(int i =0; i < (int) strlen(s1); ++i)
	{
		if(s1[i] >= 'a' && s1[i] <= 'z')
			fv1[s1[i]-'a']++;
	}
	for(int i =0; i < (int) strlen(s2); ++i)
	{
		if(s2[i] >= 'a' && s2[i] <= 'z')
			fv2[s2[i]-'a']++;
	}
	for(int i = 0; i < 26; ++i)
	{
		if(fv1[i]!=fv2[i])
		{
			cout << "NU";
			return 0;
		}
	}
	cout << "DA";
    return 0;
}