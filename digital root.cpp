#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
string str;
int main()	{
	cin>>str;
	int sum=0;
	for (int i=0;str[i]!='\0';i++)	{
		sum+=str[i]-'0';
		if (sum>9)	sum=sum/10+sum%10;
	}
	cout<<sum<<endl;
	cout << "Here is an answer from another algorithm:" <<endl;
	cout << "(sum-1)%9+1=" <<(sum-1)%9+1 <<endl;
	cout << "sum%9=" << sum%9 <<endl;
	return 0;
}
