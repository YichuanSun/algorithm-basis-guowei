#include <cstdio>
#include <iostream>
#include <algorithm>
#include <cstdlib>
#define N 5005
using namespace std;
struct point{
	int x,y;
	int operator < (const point& exp)	const{
		if (x<exp.x)	return 1;
		else if (x==exp.x)	return y<exp.y;
		else return 0;
	}
};
bool trace[N][N];
struct point frog[5000+50];
int n,r,c;
bool isInside(int x,int y)	{
	return (x>=1&&x<=r&&y>=1&&y<=c);
}
int main()	{
	scanf("%d %d",&r,&c);
	scanf("%d",&n);
	for (int i=0;i<n;i++)	{
		scanf("%d %d",&frog[i].x,&frog[i].y);
		trace[frog[i].x][frog[i].y]=true;
	}
	sort(frog,frog+n);
	int ans=0;
	for (int i=0;i<n-1;i++)	{
		for (int j=i+1;j<n;j++)	{
			int dx=frog[j].x-frog[i].x,dy=frog[j].y-frog[i].y;
			if (isInside(frog[i].x-dx,frog[i].y-dy))	continue;
			if (!isInside(frog[j].x+dx,frog[j].y+dy))	continue;
			int x=frog[i].x,y=frog[i].y,temp=0;
			while (isInside(x,y))	{
				if (trace[x][y])	temp++;
				else{
					temp=0;
					break;
				}
				x+=dx,y+=dy;
			}
			ans=max(temp,ans);
		}
	}
	printf("%d\n",ans);
	return 0;
}
