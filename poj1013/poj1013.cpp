#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;
void judge(char *st);
char coins[3][12];
int a[27];
int main()	{
	int n;
	scanf("%d",&n);
	while (n--)		{
		for(int i=0;i<3;i++)	{
			for (int j=0;j<12;j+=4){
				scanf("%s",&coins[i][j]);
			}
		}
		for (int i=0;i<3;i++)
			judge(coins[i]);
		int max=-10;
		for (int i=0;i<27;i++){
			if (a[i]>max)
				max=i;
		}
		char aim='A'+max;
		int i,j;
		for (i=0;i<3;i++)
			for (j=0;j<8;j++)
				if (coins[i][j]==aim)
					goto end;
		end:;
		if (j<=3&&coins[i][8]=='d')	printf("%c is the counterfeit coin and it is light.\n",aim);
		else if (j>3&&coins[i][8]=='d')	printf("%c is the counterfeit coin and it is heavy.\n",aim);
		else if (j<=3&&coins[i][8]=='u')	printf("%c is the counterfeit coin and it is heavy.\n",aim);
		else if (j>3&&coins[i][8]=='u')	printf("%c is the counterfeit coin and it is light.\n",aim);
		memset(coins,'\0',sizeof(coins));
		memset(a,0,sizeof(a));
	}
	return 0;
} 

void judge(char *st)	{
	int flag;
	if (*(st+8)=='e')
		flag=0;
	else if (*(st+8)=='u')
		flag=1;
	else if (*(st+8)=='d')
		flag=-1;
	switch(flag)	{
		case 0:	{
			for (int i=0;i<8;i++)
				a[*(st+i)-'A']--;
			break;
		}
		case 1:	{
			for (int i=0;i<8;i++)
				a[*(st+i)-'A']++;
			break;
		}
		case -1:	{
			for (int i=0;i<8;i++)
				a[*(st+i)-'A']++;
			break;
		}
	}
}
