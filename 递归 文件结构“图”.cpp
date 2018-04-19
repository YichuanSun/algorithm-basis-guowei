#include <iostream>
#include <algorithm>
#include <cstring>
#include <string>
#define N 1001
#define M 35
#define TAB "|     "
using namespace std;
void deal(int tab_num);
int cases;
bool isFinish=false;
string a[N];
int main()	{
	//freopen("output.txt","wa",stdout);
	while (!isFinish)	{
		deal(0);
		cases++;
		printf("\n");
	}
	return 0;
}

void deal(int tab_num)	{
	string store[M];
	char str[M];
	int file_num=0;
	scanf("%s",str);
	if (tab_num==0&&str[0]!='#')	{
		printf("DATA SET %d:\n",cases+1);
		printf("ROOT\n");
	}
	while (true)	{
		if (str[0]=='#')	{
			isFinish=true;
			return;
		}
		else if (str[0]=='*'||str[0]==']')	break;
		else if (str[0]=='f')
			store[file_num++]=str;
		else if (str[0]=='d')	{
			for (int j=0;j<tab_num+1;j++)	printf("%s",TAB);
			printf("%s\n",str);
			deal(tab_num+1);
		}
		scanf("%s",str);
	}
	sort(store,store+file_num);
	for (int i=0;i<file_num;i++)	{
		for (int j=0;j<tab_num;j++)
			printf("%s",TAB);
		printf("%s\n",store[i].c_str());
	}
	return;
}
