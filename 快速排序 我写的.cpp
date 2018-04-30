#include <iostream>
#include <algorithm>
using namespace std;
void quickSort(int a[],int s,int e);
int main()	{
	int a[10]={13,27,19,2,8,12,2,8,30,89},n=10;
	quickSort(a,0,n-1);
	for(int i=0;i<n;i++)	cout << a[i] << ",";
	printf("\n");
	return 0;
}
void quickSort(int a[],int s,int e)	{
	if (s>=e)	return;
	int i=s,j=e,times=0,k=a[s];
	while (i<j)	{
		if (times&1)	{	//为奇数 
			if (k<a[i])	{
				swap(a[i],a[j]);
				times++;
				continue;
			}i++;
		}
		else	{		//为偶数 
			if (k>a[j])	{
				swap(a[i],a[j]);
				times++;
				continue;
			}j--;
		}
	}
	quickSort(a,s,i-1);
	quickSort(a,i+1,e);
}
