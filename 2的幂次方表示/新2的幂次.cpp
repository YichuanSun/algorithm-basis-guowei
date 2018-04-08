#include <iostream>
#include <algorithm>
using namespace std;
void fun(int n);
int main()	{
	int n;
	scanf("%d",&n);
	fun(n);
	printf("\n");
}

void fun(int n)	{
	if (n==1)	{
		printf("2(0)");
		return;
	}
	else if (n==2)	{
		printf("2");
		return;
	}
	else if (n==4)	{
		printf("2(2)");
		return;
	}
	int temp=1,cnt=0;
	while (temp<=n)	{
		temp<<=1;
		cnt++;
	}temp>>=1;cnt--;
	if (temp==n)	{
		printf("2(");
		fun(cnt);
		printf(")");
	}
	else if (temp==2)	{
		printf("2+");
		fun(n-temp);
	} 
	else if (temp<n)	{
		printf("2(");
		fun(cnt);
		printf(")+");
		fun(n-temp);
	}
}







