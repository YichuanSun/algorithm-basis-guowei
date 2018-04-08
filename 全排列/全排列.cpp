#include <iostream>
#include <algorithm>
#include <cstring> 
#define N 25
using namespace std;
char a[N],ans[N];
bool mark[N];
int len;
void dfs(int n)	{
	if (n==len)	{
		for (int i=0;i<len;i++)
			printf("%c",ans[i]); 
		printf("\n");
		return;
	}
	for (int i=0;i<len;i++)	{
		if (mark[i]==false)	{
			ans[n]=a[i];
			mark[i]=true;
			dfs(n+1);
			mark[i]=false;
		}
	}
}
int main()	{
	scanf("%s",a);
	len=strlen(a);
	dfs(0);
	return 0;
}
