#include <iostream>
#include <algorithm>
using namespace std;
void fib();
int fiba[25];
int main()	{
	int n,test;
	fib();
	scanf("%d",&n);
	while (n--)	{
		scanf("%d",&test);
		printf("%d\n",fiba[test-1]);
	}
	return 0;
}

void fib()	{
	int front=1,next=1,i=1;
	fiba[0]=fiba[1]=1;
	while (i<=20)	{
		int temp=next;
		next=front+next;
		front=temp;
		fiba[i++]=front;
		fiba[i]=next;
	}
}
