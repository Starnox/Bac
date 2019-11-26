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
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> s;
	bool ok = false;
    for(int i =0 ; i<  (int) strlen(s); ++i)
    {
		if(s[i] == 'm' || strchr("aeiou",s[i]) != NULL){
			ok = true;
			continue;
		}
		strcpy(s+i,s+i+1);
		i--;
    }
	if(ok)
		cout << s;
	else
	{
		cout << "nu exista";
	}
	
    return 0;
}