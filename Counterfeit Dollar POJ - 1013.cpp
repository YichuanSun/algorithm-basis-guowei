#include <iostream>
#include <cstdio>
#include <cstring>
#include <string>

using namespace std;

int main()	{
	int n;
	scanf("%d",&n);
	while (n--)	{
		string a[3][3];
		int i;
		bool alpha[12];
		memset(alpha,sizeof(alpha),false);
		for (int i=0;i<3;i++)	
			for (int j=0;j<3;j++)
				scanf("%s",&a[i][j]);
		for (int i=0;i<3;i++)
			if (a[i][2]=="even")
				for (int j=0;j<2;j++)
					for (int k=0;k<4;k++)
						alpha[a[i][j][k]-'A']=true;
		for (int i=0;i<3;i++)
			if (a[i][2]!="even")
				break;
		for (i=0;i<12;i++)
			if (!alpha[i])
				break;
		printf("%c is the counterfeit coin and it is %s.\n",alpha[i]+'A',"haha");
	}
	return 0;
} 
