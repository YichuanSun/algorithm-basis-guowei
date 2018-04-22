#include <iostream>
#include <algorithm>
using namespace std;

int main()	{
	int a,b,c,x,y,cnt=0;
	scanf("%d %d %d",&a,&b,&c);
	for (int x=0;x<=c;x++)	{
		if (c<a*x)	break;
		if ((c-a*x)%b==0)	{
			cnt++;
			}
	}
	printf("%d\n",cnt);
	return 0;
}
