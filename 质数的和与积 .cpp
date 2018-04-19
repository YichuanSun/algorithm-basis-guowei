#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;
bool isPrime(int n)	{
	int sqr=sqrt(n);
	for (int i=2;i<=sqr;i++)	
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
