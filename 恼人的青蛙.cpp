#include <iostream>
#include <algorithm>
#define N 5005
using namespace std;
bool yield[N][N];
int main()	{
	int r,c,n;
	scanf("%d %d",&r,&c);
	scanf("%d",&n);
	for (int i=0;i<n;i++)	{
		int x,y;
		scanf("%d %d",&x,&y);	
		yield[x][y]=1;
	}
	for (int i=1;i<=r;i++)	{
		for (int j=1;j<=c;j++)
			printf("%d ",yield[i][j]);
		printf("\n");
	}
	return 0;
}
