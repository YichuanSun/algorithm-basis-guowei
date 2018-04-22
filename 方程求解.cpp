#include <iostream>
#include <algorithm>
#include <cmath>
#define N 1e8
using namespace std;
int isZero(double z)	{
	if (fabs(z)<=1e-8)	return 0;
	else if (z*N<1)	return -1;
	else return 1;	
}
int main()	{
	double low=5,high=6,times=1000;
	while (times--)	{
		double mid=(low+high)/2;
		double z=mid*mid*mid-5*mid*mid+10*mid-80;
		//cout <<"mid="<<mid <<endl;
		//cout <<"z="<< z << endl;
		//cout <<isZero(z)<<endl;
		if (isZero(z)==0)	{
			printf("%.9f\n",mid);
			break;
		}
		else if (isZero(z)==-1)	{
			low=mid;
		}
		else if (isZero(z)==1)	{
			high=mid;
		}
	}
	return 0;
}
