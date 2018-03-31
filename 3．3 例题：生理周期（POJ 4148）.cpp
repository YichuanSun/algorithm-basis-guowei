#include <iostream>
#include <algorithm>
#define N 21252
using namespace std;

int main()	{
	int p,d,e,i,k=1;
	while (scanf("%d %d %d %d",&p,&e,&i,&d)==4&&p+1&&d+1&&e+1&&i+1)
		for (int x=d+1;x<=N+d;x++)
			if (((x-p)%23==0)&&((x-e)%28==0)&&((x-i)%33==0))	{
				printf("Case %d: the next triple peak occurs in %d days.\n",k++,x-d);
				break;
			}
	return 0;
}

