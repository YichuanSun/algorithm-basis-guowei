#include <cstdio>
#include <cstring>
#include <algorithm>
using namespace std;
const int maxn=5010;
struct Node{
	int x,y;
	bool operator<(const Node&rhs)	const {		//������ع�����������ʵ�� 
		return x<rhs.x||(x==rhs.x&&y<rhs.y);
	}
}nodes[maxn];
bool vis[maxn][maxn];
int n,m,p;
bool inside(int x,int y)	{
	return x>=1&&x<=n&&y>=1&&y<=m;
}
int main()	{
	scanf("%d%d%d",&n,&m,&p);
	for (int i=0;i<p;i++)	{
		scanf("%d%d",&nodes[i].x,&nodes[i].y);
		vis[nodes[i].x][nodes[i].y]=1;
	}
	sort(nodes,nodes+p);
	int ans=0;
	for (int i=0;i<p;i++)
		for (int j=i+1;j<p;j++)	{
			int dx=nodes[j].x-nodes[i].x,dy=nodes[j].y-nodes[i].y;
			if (inside(nodes[i].x-dx,nodes[i].y-dy))	continue;	//ֻ�������������Ե�ϵĵ�ſ�ʼ�ǳ��ȣ������˵���������Ѿ�������ˣ����� 
			int xx=nodes[j].x+dx,yy=nodes[j].y+dy;
			if (!inside(xx,yy))	continue;		//��֦�������һ���˵����������߶γ�������һ��Ԫ�س����ˣ�Ҳ���� 
			int cnt=2;
			while (inside(xx,yy))	{		//�������̽��������δ���أ������������߶ε���㣬��ʼ��������� 
				if (vis[xx][yy])	cnt++;
				else	{
					cnt=0;
					break;
				}
				xx+=dx,yy+=dy;
			}
			ans=max(ans,cnt);
		}
	printf("%d\n",ans);
	return 0;
}



