#include <cstdio>
using namespace std;
int f(int m,int n)	{
	if (n>m)	return f(m,m);
	if (m==0)	return 1;
	if (n==0)	return 0;
	return f(m,n-1)+f(m-n,n);
}
int main()	{
	int t,m,n;
	scanf("%d",&t);
	while (t--)	{
		scanf("%d %d",&m,&n);
		printf("%d\n",f(m,n));
	} 
	return 0;
}
/*		错误思路，想拆开，但是最后越想越复杂，拆不成了。我觉得dfs也能做，但是我写不出来 
#include <iostream>
#include <algorithm>
using namespace std;
void put(int m,int n);
int k=0;
int main()	{
	int M,N,t;
	scanf("%d",&t);
	while (t--)	{
		scanf("%d %d",&M,&N);
		put(M,N);
		printf("%d\n",k);
		k=0;
	} 
	return 0;
}

void put(int m,int n)	{
	if (m==1||m==0)	{
		k++;
		return;
	}
	if (n==0)	return;
	if (m%n==0)	{
		for (int i=0;i<=m/n;i++)	put(i,n-1);
	}
	else {
		for (int i=1;i<=m/n+1;i++)	put(i,n-1);
	}
}
*/
