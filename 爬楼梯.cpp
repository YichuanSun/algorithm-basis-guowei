#include <iostream>
#include <algorithm>
#include <cstdio>
using namespace std;
int n;
int GO(int t);
int main()	{
	while (scanf("%d",&n)!=EOF)
		printf("%d\n",GO(0));
	return 0;
}

int GO(int t)	{
	if (t==n-2)	return 2;
	else if (t==n-1)	return 1;
	else if (t==n)	return 0;
	else return GO(t+1)+GO(t+2);
}
