#include <iostream>
#include <cstring>
using namespace std;
char Left[3][7];
char Right[3][7];
char result[3][7];
bool IsFake(char c);
bool IsFake1(char c);
int main()	{
	int t;
	cin  >> t;
	while (t--)	{
		for (int i=0;i<3;++i)
			cin >> Left[i] >> Right[i] >> result[i];
		for (char c='A';c<='L';c++)	{
			if (IsFake(c))	{
				cout << c << " is the counterfeit coin and it is light.\n";
				break;
			}
			else if (IsFake1(c))	{
				cout << c << " is the counterfeit coin and it is heavy.\n";
				break;
			}
		}
	}
	return 0;
}

bool IsFake(char c)	{
	for (int i=0;i<3;i++)	{
		char *pLeft,*pRight;
		pLeft=Left[i];
		pRight=Right[i];
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

bool IsFake1(char c)	{
	for (int i=0;i<3;i++)	{
		char *pLeft,*pRight;
		pLeft=Right[i];
		pRight=Left[i];
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
