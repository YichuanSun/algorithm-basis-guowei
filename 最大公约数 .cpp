#include <iostream>
#include <algorithm>
using namespace std;
int gcd(int a,int b);
int main()	{
	int a,b;
	while (scanf("%d %d",&a,&b)!=EOF)
		printf("%d\n",gcd(a,b));
	return 0;
}
int gcd(int a,int b)	{
	if (b==0)	return a;
	else gcd(b,a%b);
}
