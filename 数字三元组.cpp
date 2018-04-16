#include <iostream>
#include <algorithm>
using namespace std;

int main()	{
	int n,Max=0;
	scanf("%d",&n);
	for (int i=0;i<=n;i++)	{
		for (int j=0;j<=n;j++)	{
			for (int k=0;k<=n;k++)	{
				if (!((i+j)&1)&&(j+k)%3==0&&(i+j+k)%5==0)	{
					int sum=i+j+k;
					Max=max(Max,sum);
				}
			}
		}
	}
	printf("%d\n",Max);
	return 0;
}
