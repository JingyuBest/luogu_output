#include <bits/stdc++.h>
using namespace std;
string s[100];
int cnt;
string x;

void solve1()
{
	freopen("data.csv","r",stdin);
	freopen("over1.csv","w",stdout);
	char c;
	while(c=getchar(),c!=EOF)
	{
		if(c=='\t')cout<<',';
		else cout<<c;
	}
}

void solve2()
{
	freopen("over1.csv","r",stdin);
	freopen("over2.csv","w",stdout);
	while(cin>>x)
	{
		if(x[0]=='#')
		{
			for(int i = 1;i <= cnt;i ++)
			{
				if(i>1)cout<<',';
				cout<<s[i];
			}
			cout<<'\n';
			cnt=0;
		}
		s[++cnt]=x;
	}
	for(int i = 1;i <= cnt;i ++)
	{
		if(i>1)cout<<',';
		cout<<s[i];
	}
}

void solve3()
{
	freopen("over2.csv","r",stdin);
	freopen("over3.csv","w",stdout);
	char c,last=0;
	while(c=getchar(),c!=EOF)
	{
		if(c==','&&last==',')
		{
			cout<<',';
		}
		cout<<c;
		last=c;
	}
}

int main()
{
	solve1();
	solve2();
	solve3();
	return 0;
}