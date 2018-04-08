#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;
char Left[3][7];
char Right[3][7];
char result[3][7];
bool IsLight(char aim);
bool IsHeavy(char aim);
int main()	{
	int n;
	scanf("%d",&n);
	while (n--)	{
		for (int i=0;i<3;i++)
			cin >> Left[i] >> Right[i] >> result[i];
		for (char aim='A';aim<='L';aim++)	{
			if (IsLight(aim))	{
				printf("%c is the counterfeit coin and it is light.\n",aim);
			}
			else if (IsHeavy(aim))	{
				printf("%c is the counterfeit coin and it is heavy.\n",aim);
			}
		}
	}
	return 0;
}

bool IsLight(char c){
	for (int i=0;i<3;i++)	{
		char *pLeft=Left[i];
		char *pRight=Right[i];
		switch(result[i][0])	{
			case 'u':
				if (strchr(pRight,c)==NULL)
					return false;
				break; 
			case 'e':
				if (strchr(pLeft,c)||strchr(pRight,c))
					return false;
				break;
			case 'd':
				if (strchr(pLeft,c)==NULL)
					return false;
				break;
		}
	}
	return true;
}

bool IsHeavy(char c){
	for (int i=0;i<3;i++)	{
		char *pLeft=Right[i];
		char *pRight=Left[i];
		switch(result[i][0])	{
			case 'u':
				if (strchr(pRight,c)==NULL)
					return false;
				break; 
			case 'e':
				if (strchr(pLeft,c)||strchr(pRight,c))
					return false;
				break;
			case 'd':
				if (strchr(pLeft,c)==NULL)
					return false;
				break;
		}
	}
	return true;
}



