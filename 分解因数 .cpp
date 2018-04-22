#include <iostream>
#include <algorithm>
using namespace std;
int cnt;
bool flag=false;
void deal(int m,int n)	{
	int i;
	if (!flag)	i=1;
	else i=2;
	for (;i<=sqrt(n);i++)	{
		if (n%i==0)	{
			int q=n/i;
			if (q<m||i<m)	continue;
			cnt++;
			flag=true;
			//printf("cnt=%d m=%d n=%d i=%d q=%d\n",cnt,m,n,i,q);
			if (i!=1)	deal(i,q);
		}
	}
}
int main()	{
	int time;
	scanf("%d",&time);
	while (time--)	{
		int num;
		scanf("%d",&num);
		deal(0,num);
		printf("%d\n",cnt);cnt=0;flag=false;
	}
	return 0;
}
