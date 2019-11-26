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
char res[105];
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
	cin.get(s,sizeof(s));

	char *p = strtok(s," ");
	while(p!=NULL)
	{
		char aux[105];
		strcpy(aux,p);
		if(strlen(p) % 2 == 0)
		{
			strcat(res,"#");
			strcat(res," ");
		}
		else
		{
			strcat(res, aux);
			strcat(res, " ");
		}
		p = strtok(NULL," ");
	}
	cout << res;
    return 0;
}