#include <iostream>
#include <algorithm>
using namespace std;
int sqr(int n)	{
	int i=1;
	while (i*i<n)	i++;
	return i;
}
bool isPrime(int n)	{
	for (int i=2;i<=sqr(n);i++)	
		if (n%i==0&&n!=2)	return false;
	return true;
}
int main()	{
	int n,maxmul=-1;
	scanf("%d",&n);
	for (int i=1;i<=n/2;i++)
		if (isPrime(i)&&isPrime(n-i))	maxmul=max(maxmul,i*(n-i));
	printf("%d\n",maxmul);
	return 0;
}
