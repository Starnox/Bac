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
	bool ok = false;
	while(p!=NULL)
	{
		char aux[105];
		strcpy(aux,p);
		if(strlen(aux) % 2 == 1 && strlen(aux) >=3)
		{
			int len = (int) strlen(aux);
			strcpy(aux+(len/2), aux+(len/2)+1);	
			ok = true;
		}
		strcat(res,aux);
		strcat(res," ");
		p = strtok(NULL," ");
	}
	if(ok)
		cout << res;
	else
	{
		cout << "nu exista";
	}
	
    return 0;
}