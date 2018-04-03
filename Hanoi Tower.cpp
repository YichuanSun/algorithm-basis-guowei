#include <iostream>
#include <algorithm>
using namespace std;
void Hanoi(int n,char a,char b,char c);
int main()	{
	int n;
	cin >> n;
	Hanoi(n,'A','B','C');
	return 0;
}
//有缺点，数字稍微大一点就爆栈了，比如14就不行了。 
void Hanoi(int n,char a,char b,char c)	{
	if (n==1)	{
		cout << "move " << "1 " << "from " << a << " to " << c <<endl;
		return;
	}
	Hanoi(n-1,a,c,b);
	cout << "move " << n << " from " << a << " to " << c <<endl;
	Hanoi(n-1,b,a,c);
	return;
}
