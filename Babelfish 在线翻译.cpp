#include <iostream>
#include <algorithm>
#include <cstring>
#define N 100050
using namespace std;
char ori[N][20],fore[N][20],dic[N][20];
int main()	{
	int i=0,j=0,k=0;
	while (scanf("%s",ori[i++])&&ori[i-1][0]!='\n')	{
		getchar();
		scanf("%s",fore[j++]);
		getchar();
	}
	while (scanf("%s",dic[k])!=EOF)	k++;
	for (int cnt=0;ori[i][0]!='\0';cnt++)
		printf("%s\n",ori[i]);
	return 0;
}
