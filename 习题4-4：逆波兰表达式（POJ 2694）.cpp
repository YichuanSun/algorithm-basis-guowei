#include <cstdio>
#include <cstdlib>
using namespace std;
double exp()	{
	char str[20];
	scanf("%s",str);
	switch(str[0])	{
		case '+':	return exp()+exp();break;
		case '-':	return exp()-exp();break;
		case '*':	return exp()*exp();break;
		case '/':	return exp()/exp();break;
		default:	return atof(str);break;
	}
}
int main()	{
	double ans=exp();
	printf("%f\n",ans);
	return 0;
} 
